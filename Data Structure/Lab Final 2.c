#include<stdio.h>
int main()
{
    int i,arr[7]={44,2,77,32,5,55,3};
    int item=33,pos=4,n=7;
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=item;
    n=n+1;
    for(i=0;i<=7;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
