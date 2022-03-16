#include<stdio.h>
int bubble(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}
int main()
{
    int i,arr[20],n=10;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
