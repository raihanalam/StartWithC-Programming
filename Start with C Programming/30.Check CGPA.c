#include &lt;stdio.h>
int main()
{
    int i, j;
    printf("Enter line: \n");
    scanf("%d",&i);
    
    for(i;i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}