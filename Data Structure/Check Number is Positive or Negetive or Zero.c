#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a>0)
        printf("Number is Positive");
    else if(a<0)
        printf("Number is Negative");
    else if(a==0)
        printf("Number Is Zero");

    return 0;
}
