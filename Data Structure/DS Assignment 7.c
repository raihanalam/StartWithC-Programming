#include<stdio.h>
void binary(int arr[],int n,int src)
{
    int loc,first=0,last=n,mid;
    mid=(first+last)/2;
    while(first<last)
    {
        if(arr[mid]==src)
        {
          loc=mid+1;
          break;
        }
        else if(src>arr[mid])
            first=mid+1;
        else
            last=mid-1;
        mid=(first+last)/2;
    }
    if(first>last)
        printf("Not Found");
    else
        printf("Location is %d",loc);
}
int main()
{
    int i,arr[20],n=10,src;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Search:\n");
    scanf("%d",&src);
    binary(arr,n,src);
}
