#include<stdio.h>
int *linear(int arr[],int n,int loc)
{
    int i;
    for(i=loc-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    return arr;
}
int main()
{
    int i,arr[20],n=10,loc,*x;
    printf("Enter Values_");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Position_");
    scanf("%d",&loc);
    linear(arr,n,loc);
    for(i=1;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}

