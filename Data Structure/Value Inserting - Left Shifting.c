#include<stdio.h>
int main()
{
    int i,item=20,pos=5,n=10,arr[20];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<pos-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[pos-1]=item;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
