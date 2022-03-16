#include<stdio.h>
int *delete(int arr[],int *n,int pos)
{
    int i;
    for(i=pos-1;i<*n;i++)
    {
        arr[i]=arr[i+1];
    }
    *n=*n-1;
    return arr;
}
int main()
{
    int i,arr[20],n=10,item,pos,*x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&pos);
    x=delete(arr,&n,pos);
    for(i=0;i<n;i++)
    {
        printf("%d\n",*x);
        *x++;
    }
    return 0;
}

