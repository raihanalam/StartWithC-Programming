#include<stdio.h>
int main()
{
    int i,count=0,number,arr[]={17,10,17,10,32,10,67,10,10,17};
    scanf("%d",&number);

    for(i=0;i<10;i++)
    {
        if(arr[i]==number)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
