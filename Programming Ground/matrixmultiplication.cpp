#include <stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,sum=0;
    int first[10][10],second[10][10],multiply[10][10];

    printf("Enter rows and columns of first matrix:\n");
    scanf("%d%d", &r1, &c1);

    printf("Enter elements of first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix:\n");
    scanf("%d%d",&r2,&c2);

    if (c1!=r2)
        printf("The matrices can't be multiplied.\n");
    else
    {
        printf("Enter second matrix:\n");

        for(i=0;i<r2;i++)
        {
          for(j=0;j<c2;j++)
          {
              scanf("%d",&second[i][j]);
          }
        }

        for(i=0;i<r1;i++)
        {
          for(j=0;j<c2;j++)
          {
            for(k=0;k<r2;k++)
            {
              sum=sum+first[i][k]*second[k][j];
            }
            multiply[i][j]=sum;
            sum=0;
          }
        }

        printf("Product:\n");

        for (i=0;i<r1; i++)
        {
          for (j=0;j<c2;j++)
          {
            printf("%d\t", multiply[i][j]);
          }
          printf("\n");
        }
    }
    return 0;
}
