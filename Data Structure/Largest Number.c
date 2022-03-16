#include<stdio.h>
int main()
{
    int i,x[10],max=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        if(x[i]>=max)
            max=x[i];
    }
    printf("%d",max);
}
