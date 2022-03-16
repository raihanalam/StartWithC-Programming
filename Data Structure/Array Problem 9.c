#include<stdio.h>
int main()
{
    int i,arr[20],n=10,loc=0,src;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter value to search\n");
    scanf("%d",&src);
    for(i=0;i<n;i++)
    {
        if(arr[i]==src)
        {
            loc=i;
            break;
        }
    }
    if(loc==0)
        printf("Not Found");
    else
        printf("Location is %d",loc+1);

}
