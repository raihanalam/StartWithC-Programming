#include &lt;stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter line: \n");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    
    sum=sum+i;
    printf("%d",sum);
    return 0;
}