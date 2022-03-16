#include<stdio.h>
int main()
{
    int arr[5]={10,12,3,14},i,item=4,k=3-1,n=5;
    for(i=n-1;i>=k;i--)
    {
        arr  [i+1]=arr[i];
    }
    arr[k]=item;
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}
