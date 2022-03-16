#include<stdio.h>
int sum(int arr[2][3],int arr1[2][3],int arr2[2][3]);
int main()
{
    int i,j,arr[2][3],arr1[2][3],arr2[2][3];
    printf("Array 1\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    sum(arr,arr1,arr2);
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",arr2[i][j]);
        }
    }
    return 0;
}
int sum(int arr[2][3],int arr1[2][3],int arr2[2][3])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            arr2[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    return arr2;


}
