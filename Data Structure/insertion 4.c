#include<stdio.h>
int insertion(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            arr[j]=temp;
            j=j-1;
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
    insertion(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
