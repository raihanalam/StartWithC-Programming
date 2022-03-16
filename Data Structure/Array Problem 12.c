#include<stdio.h>
int main()
{
    ///value Inserting right shifting
    int arr[20],i,n=10,pos=5,value=20;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    for(i=0;i<n+1;i++)
    {
        printf("%d\n",arr[i]);
    }
}
