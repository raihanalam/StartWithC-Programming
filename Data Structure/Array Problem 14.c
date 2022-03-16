#include<stdio.h>
int main()
{
    int arr[20],n=10,pos=5,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=pos-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    for(i=1;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
