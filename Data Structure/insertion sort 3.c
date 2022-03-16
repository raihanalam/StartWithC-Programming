#include<stdio.h>
int selection(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i;j>=0;j--)
        {
            if(arr[j+1]<arr[j])
                arr[j]=arr[j+1];
        }
    }
    return arr;

}
int main()
{
    int i,arr[20],n=10,pos=5,value=20;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;

}
