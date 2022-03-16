#include<stdio.H>
int main()
{
    int arr[10][10],arr1[10][10],r,c,i,j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            arr1[j][i]=arr[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

}
