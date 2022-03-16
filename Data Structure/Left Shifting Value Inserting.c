#include<stdio.h>
int shifting(int arr[],int pos,int n,int value)
{
    int i;
    for(i=0;i<pos-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[pos-1]=value;
    return arr;

}
int main()
{
    int i,arr[20],n=10,pos=5,value=20;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    shifting(arr,pos,n,value);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;

}

