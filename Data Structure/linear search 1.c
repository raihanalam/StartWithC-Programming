#include<stdio.h>
int linear(int arr[],int n,int src)
{
    int i,loc=0-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]==src)
            loc=i;
    }
    return loc;
}
int main()
{
    int i,arr[20],n=10,src,x;
    printf("Enter Values_");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Search_");
    scanf("%d",&src);
    x=linear(arr,n,src);
    if(x==-1)
        printf("Not Found");
    else
        printf("Position is %d",x+1);
}
