#include<stdio.h>
int add (int x,int y)
{
    return x+y;
}
int add (int x, int y);
int main ()
{
    int a,b,sum;
    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("The Sum Is %d",sum);
}

