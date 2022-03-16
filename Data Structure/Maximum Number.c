#include<stdio.h>
int max(int arr[],int n)
{
    int max=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int main()
{
    int i,arr[20],n=10;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Maximum number %d",max(arr,n));
}
