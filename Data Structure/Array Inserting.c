#include<stdio.h>
int main()
{
    int arr[10],n=5,k,i,new;
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter K:");
    scanf("%d",&k);
    printf("Enter Value:");
    scanf("%d",&new);
    for(i=n-1;i>=k-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[k-1]=new;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
