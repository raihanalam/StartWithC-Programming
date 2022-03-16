#include<stdio.h>
int main()
{
    int i,n,x,max=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);

        if(x > max)
            max = x;
    }
    printf("%d",max);
}
