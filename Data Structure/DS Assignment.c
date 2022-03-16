#include<stdio.h>
int *insert(int arr[],int *n,int item,int pos)
{
    int i;
    for(i=*n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=item;
    *n=*n+1;
    return arr;
}
int main()
{
    int i,arr[20],n=10,item,pos,*x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&item);
    scanf("%d",&pos);
    x=insert(arr,&n,item,pos);
    for(i=0;i<n;i++)
    {
        printf("%d\n",*x);
        *x++;
    }
    return 0;
}
