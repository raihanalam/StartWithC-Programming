#include<stdio.h>
int main()
{
    int arr[20],i,n,loc=i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(n==arr[i])
            loc=i;

    }
    printf("%d",loc);

}
