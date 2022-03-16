#include &lt;stdio.h>
int main()
{
    int a,b,sum,sub,div,mul,mod,avg;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    avg=sum/2;
    printf("Summation=%d,\nSubstitution=%d,\nMultiplication=%d,\nDivision=%d,\nModular Division=%d,\nAverage=%d",sum,sub,mul,div,mod,avg);
    
   return 0;
}