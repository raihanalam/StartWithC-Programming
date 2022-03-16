#include<stdio.h>
int main()
{
    int arr[20],n=10,i,mid,first=0,last=n-1,src=7;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mid=(first+last)/2;
    while(first<=last)
    {
        if(arr[mid]==src)
        {
            printf("%d Is Location",mid);
            break;
        }
        else if(arr[mid]>src)
            last=mid-1;
        else
            first=mid+1;
        mid=(first+last)/2;
    }
    if(first>last)
        printf("Not FOund");
}
