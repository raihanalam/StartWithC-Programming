#include<stdio.h>
int main()
{
    int arr[100],n,i,value,pos;
    printf("Enter Total Elements:");
    scanf("%d",&n);
    printf("Enter %d Value:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Position Where You Want To Insert:");
    scanf("%d",&pos);
    printf("Enter Value:");
    scanf("%d",&value);
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    for(i=0;i<=n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
