#include<stdio.h>
int main()
{
    int arr[20],i,j,n=10,temp,min;

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        min=i;
        for(j=n-i-1;j>=0;j--)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
