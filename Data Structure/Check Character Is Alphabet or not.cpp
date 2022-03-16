#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z' || a>='A' && a<='Z' )
        printf("Character is alphabet");
    else
        printf("Character is not alphabet");

    return 0;
}


