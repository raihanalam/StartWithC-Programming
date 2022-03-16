#include<stdio.h>
int main()
{
    //Left Shift value Inserting
    int i,arr[20],n=10,pos=5,value=20;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=pos-1;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[pos-1]=value;
    for(i=0;i<n;i++)
    {
       printf("%d\n",arr[i]);
    }
}
