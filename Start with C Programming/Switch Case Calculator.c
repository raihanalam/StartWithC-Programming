#include<stdio.h>
void main()
{
    int a,b;
    char c;
    printf("Enter Operator:");
    scanf("%c",&c);
    printf("Enter 2 Numbers:");
    scanf("%d %d",&a,&b);
    switch(c)
    {
    case '+':
        {
            printf("%d",a+b);
            break;
        }
    case '-':
        {
            printf("%d",a-b);
            break;
        }
    case '*':
        {
            printf("%d",a*b);
            break;
        }
    case '/':
        {
            printf("%d",a/b);
            break;
        }
    case '%':
        {
            printf("%d",a%b);
            break;
        }
    }
}
