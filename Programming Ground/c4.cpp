#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp,*fp2,*fp3;
    int p;
    char *filename,ch;

    fp=fopen("input.txt","r");
    fp2=fopen("newfile.txt","w");

    while((p=getc(fp))!=EOF)
    {

        fputc(p,fp2);
        if (p==10)
        {
            while((p=getc(fp))==10)
            {
            }
            fputc(p,fp2);

        }
    }
    fclose(fp2);
    fclose(fp);

    remove("input.txt");
    rename("newfile.txt", "input.txt");

    fp3=fopen("input.txt","r");
    while((ch = fgetc(fp3)) != EOF)
        putchar(ch);
    fclose(fp3);
    return 0;
}
