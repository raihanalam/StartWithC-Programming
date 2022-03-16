#include<stdio.h>
int main()
{
    int i,arr[20],n=10,min=100*10;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%d",min);
}
