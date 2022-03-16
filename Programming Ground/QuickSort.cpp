#include<stdio.h>
void Quicksort(int A[],int p,int r);
int Partition(int A[],int p,int r);
int main()
{
    int arr[100],p=0,q=10,i;
    for(i=0;i<q;i++)
    {
        scanf("%d",&arr[i]);
    }
    Quicksort(arr,p,q);
    for(i=0;i<q;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
void  Quicksort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
       q=Partition(a,p,r);
       Quicksort(a,p,q-1);
       Quicksort(a,q+1,r);
    }
}
int Partition(int a[],int p,int r)
{
    int x,i,j,temp;
    x=a[r];
    i=p-1;
    for(j=p;j<r-1;j++)
    {
        if(a[j] <= x)
        {
            i=i+1;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return i+1;
}
