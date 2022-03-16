#include &lt;stdio.h>
int main()
{
    int num,i,c=0;
    printf("Enter line: \n");
    scanf("%d",&num);
    
    for(i=2;i<=num;i++)
    if(num%i==0)
      c++;
    {
    if(c==0)
       printf("prime");
    else
       printf("not prime");
    }
    return 0;
}