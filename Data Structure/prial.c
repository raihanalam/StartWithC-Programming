#include<stdio.h>
int main()
{
    int i,k=4,a[7]={1,2,3,4,5,6,7};
    for(i=4-1;i>0;i--)
        a[i]=a[i-1];
    for(i=1;i<7;i++)
        printf("%d",a[i]);
    return 0;
}
