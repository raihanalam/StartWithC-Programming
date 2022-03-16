#include<stdio.h>
int min(int arr[],int n)
{
    int i,min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int i,arr[20],n=10;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Minimum Number %d",min(arr,n));
}
