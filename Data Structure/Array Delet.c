#include<stdio.h>
int main()
{
    int i,pos,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Position");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
    {
       arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",arr[i]);
    }
}
