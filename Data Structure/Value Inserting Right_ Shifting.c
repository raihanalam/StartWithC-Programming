#include<stdio.h>
int *shifting(int arr[],int pos,int n,int value)
{
    int i;
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    return arr;
}
int main()
{
    int i,arr[20],n=10,pos=5,value=20,*x;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    x=shifting(arr,pos,n,value);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",*x);
        *x++;
    }
    return 0;
}
