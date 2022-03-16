#include &lt;stdio.h>
int main()
{
    int num,i,j;
    printf("Enter line: \n");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        printf("*");
    }
    return 0;
}