#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1000
void printFile(FILE *fptr)
{
    char ch;

    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);
}
int isEmpty(const char *str)
{
    char ch;

    do
    {
        ch = *(str++);

        if(ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r' && ch != '\0')
            return 0;

    } while (ch != '\0');

    return 1;
}
void removeEmptyLines(FILE *srcFile, FILE *tempFile)
{
    char buffer[BUFFER_SIZE];

    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        if(!isEmpty(buffer))
            fputs(buffer, tempFile);
    }
}
int main()
{
    FILE *srcFile;
    FILE *tempFile;

    char path[100];

    srcFile  = fopen("input.txt", "r");
    tempFile = fopen("remove-blanks.tmp", "w");

    if (srcFile == NULL || tempFile == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }
    rewind(srcFile);
    removeEmptyLines(srcFile, tempFile);

    fclose(srcFile);
    fclose(tempFile);

    remove("input.txt");
    rename("remove-blanks.tmp", "input.txt");

    srcFile = fopen("input.txt", "r");
    printFile(srcFile);
    fclose(srcFile);

    return 0;
}
