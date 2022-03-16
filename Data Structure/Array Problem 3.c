#include<stdio.h>
int main()
{
    int arr[10],arr1[10],i,temp;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);

    }
    for(i=0;i<5;i++)
    {
      temp=arr[i]+arr1[i];
      arr1[i]=temp;
    }
    printf("Sum of Two Array\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr1[i]);

    }

    return 0;
}
