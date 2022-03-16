#include &lt;stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter line: \n");
    scanf("%d",&num);
    
    for(i=2;i<=num;i=i+2)
    sum=sum+i;
    {
    printf("%d",sum);
    }
    return 0;
}