#include<stdio.h>
int selection(int arr[],int n)
{
    int i,j,index_min,temp;
    for(i=0;i<n;i++)
    {
        index_min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index_min])
            {
                index_min=j;
            }
        }
        if(index_min!=i)
        {
            temp=arr[i];
            arr[i]=arr[index_min];
            arr[index_min]=temp;
        }
    }
    return arr;
}
int main()
{
    int i,n=10,arr[20];
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
