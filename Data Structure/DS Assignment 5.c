#include<stdio.h>
int selection(int arr[],int n)
{
    int i,j,temp,min;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=1+i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
              min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
    selection(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

