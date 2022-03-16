#include<stdio.h>
int fun(int b,int p)
{
    if(p!=0)
        return b=b*fun(b,p-1);
    else
        return 1;

}
int main()
{
    int b,p;
    printf("Enter Base: ");
    scanf("%d",&b);
    printf("Enter Power: ");
    scanf("%d",&p);
    printf("%d",fun(b,p));

}

