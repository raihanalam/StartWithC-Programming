#include<stdio.h>
int main()
{
    ///array to array copy
    int arr[20],arr1[20],n=5,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr1[i]=arr[i];
        printf("%d",arr1[i]);
    }
}
