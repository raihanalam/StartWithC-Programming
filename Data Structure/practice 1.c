#include<stdio.h>
int main()
{
    int i=0,n=10,mid,arr[20],src,beg=0,end=n-1;
    while(i<n)
    {
        scanf("%d",&arr[i]);
        ++i;
    }
    printf("Search_");
    scanf("%d",&src);
    mid=(beg+end)/2;
    while(beg<=end)
    {
        if(arr[mid]<src)
            beg=mid+1;
        else if(arr[mid]==src)
        {
            printf("%d is location",mid+1);
            break;
        }
        else
            end=mid-1;
        mid=(beg+end)/2;
    }
    if(beg>end)
        printf("Not Found");
}
