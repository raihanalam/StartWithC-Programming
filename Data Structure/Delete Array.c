#include<stdio.h>
int main()
{
    int arr[100],n,del,i;
    printf("Enter Total Element:");
    scanf("%d",&n);
    printf("Enter %d Value",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Position What You Want to delet:");
    scanf("%d",&del);
    for(i=del-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",arr[i]);
    }
}
