#include<stdio.h>
int main()
{
    int i,arr[20],large=0,n=10;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>large)
            large=arr[i];
    }
    printf("Largest Number %d",large);
}
