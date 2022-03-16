#include<stdio.h>
int main()
{
    ///array left shifting
    int arr[20],n=10,pos=5,i;
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
