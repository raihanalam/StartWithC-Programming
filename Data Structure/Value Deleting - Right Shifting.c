#include<stdio.h>
int main()
{
    int i,arr[20],pos=5,n=10;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",arr[i]);
    }

}
