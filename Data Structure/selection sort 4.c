#include<stdio.h>
int selection(int arr[],int n)
{
    int i,j,temp,index_min;
    for(i=0;i<n;i++)
    {
        index_min=i;
        for(j=0+i;j<n;j++)
        {
            if(arr[j]<arr[index_min])
                {
                    index_min=j;
                }
        }
        temp=arr[i];
        arr[i]=arr[index_min];
        arr[index_min]=temp;
    }
    return arr;


    return arr;

}
int main()
{
    int i,arr[20],n=10,pos=5,value=20;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;

}


