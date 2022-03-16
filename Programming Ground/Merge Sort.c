#include<stdio.h>
int merge_sort(int arr[],int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,mid,right);

        return arr;
    }
}
int merge(int arr[],int left,int mid,int right)
{
    int i,size_left,size_right;
    int k,j=1;

    size_left=mid-left+1;
    size_right=right-mid;

    int l[size_left+1],r[size_right+1];

    for(i=1;i<=size_left;i++)
    {
        l[i]=arr[left+i-1];
    }
    for(j=1;j<=size_right;j++)
    {
        r[j]=arr[mid+j];
    }
    for(k=1;k<=right;k++)
    {
        if(l[i]<=r[j])
        {
            arr[k]=l[i];
            i++;
        }
        else
        {
            arr[k]=r[j];
            j++;
        }
    }
    return arr;
}
void printSort(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int i,arr[20],n=10,left=1,right=n-1;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }

    merge_sort(arr,left,right);
    printSort(arr,n);

    return 0;
}
