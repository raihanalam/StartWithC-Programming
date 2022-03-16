#include<stdio.h>
int main()
{
    int i=0,count=0,dis=0;
    char str[200];

    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]==' ')
            count++;
        if(str[i]==' ' && str[i+1]==' ')
            dis++;
        i=i+1;
    }
    count=count-dis+1;
    printf("%d",count);
}
