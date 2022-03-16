#include<stdio.h>
int shift(int arr[],int n,int pos,int item)
{
    int i;
    for(i=0;i<pos;i++){
       arr[i]=arr[i+1];
    }
    arr[pos-1]=item;
    return arr;
}
int main()
{
    int i=0,arr[20],n=10,pos=5,item=20;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    shift(arr,n,pos,item);
    for(i=0;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
