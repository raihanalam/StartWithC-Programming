#include<stdio.h>
int main()
{
    int i,j,arr[10],temp,min,n,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=n-1;
        min=k;
        for(j=i-1;j>=0;j--)
        {
          if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        k--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
