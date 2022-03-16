#include<stdio.h>
int main()
{
    ///Array reverse
    char str[100],str1[100];
    int i=0,j;
    gets(str);
    j=strlen(str);
    while(str[i]!='\0')
    {
        str1[i]=str[j-1];
        i++;
        j--;
    }
    str1[i]='\0';
    printf("%s",str1);
}
