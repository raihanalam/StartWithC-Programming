#include<stdio.h>
int main()
{
    int i,arr[10];

    for(i=0;i<10;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0 && arr[i]>0)
            printf("%d",arr[i]);
    }
}
