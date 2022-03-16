#include<stdio.h>
int main()
{
    char i,j=0,str[200],str1[100];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        j++;
    }
    for(i=0,j=j-1;j>=0;i++,j--)
    {
        str1[i]=str[j];
    }
    str1[i]='\0';

    puts(str1);

}
