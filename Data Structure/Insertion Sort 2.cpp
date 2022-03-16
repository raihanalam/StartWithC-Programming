#include<stdio.h>
int main()
{
    int arr[20],n=10,temp,i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}
