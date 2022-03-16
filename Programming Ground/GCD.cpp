#include <stdio.h>
int main()
{
    int num1,num2,n1,n2,rem;
    scanf("%d%d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("gcd %d\n",n1);
    printf("lcm %d\n",(num1*num2)/n1);
}
