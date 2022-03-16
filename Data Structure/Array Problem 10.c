#include<stdio.h>
int main()
{
    int i,arr[20],n=10,first=0,last=n-1,mid,src;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("search_");
    scanf("%d",&src);
    mid=(first+last)/2;
    while(first<=last)
    {
        if(arr[mid]==src)
        {
            printf("%d is location",mid+1);
            break;
        }
        else if(arr[mid]>src)
            last=mid-1;
        else
            first=mid+1;
        mid=(first+last)/2;
    }
    if(first>last)
        printf("Not Found");
}
