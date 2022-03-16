#include<stdio.h>
int linear(int arr[],int n,int src)
{
    int i,loc=0-1,first=0,last=n-1,mid;
    mid=(last+last)/2;
    while(first<last)
    {
        if(arr[mid]==src)
        {
            loc=mid;
            break;
        }
        else if(arr[mid]>src)
        {
            last=mid-1;
        }
        else
            first=mid+1;
        mid=(first+last)/2;
    }
    if(first>last)
        printf("Not Found");
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
    if(x>0)
        printf("Location Is %d",x+1);
}
