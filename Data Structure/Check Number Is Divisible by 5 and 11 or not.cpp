#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
        printf("Number is divisible by 5 and 11");
    else
        printf("Number Is Not Divisible by 5 and 11");

    return 0;
}

