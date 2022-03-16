#include<stdio.h>
int *bubble(int arr[],n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;

}
int main()
{
    int *x,arr[20],n=10,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    x = bubble(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",*x);
        x++;
    }
}
