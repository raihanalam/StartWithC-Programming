#include &lt;stdio.h>
int main()
{
    int num,i,j=0;
    printf("enter a nunumber: ");
    scanf("%d",&num);
    
    for(i=2; i<num; i++)
    {
       if(num%i==0)
       {
       j++;
       break;
       }
    }
    if(j==0)
       printf("prime");
    else
       printf("Not prime");
   return 0;
}