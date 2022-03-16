#include<stdio.h>
int main()
{
    char str[200];
    int i=0;
    gets(str);
    while(str[i]!='\0')
    {
       i++;
    }
    printf("%d",i);
}
