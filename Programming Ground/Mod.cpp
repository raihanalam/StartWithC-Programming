#include<stdio.h>
int main()
{
    int i,n1,n2,res=1;
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n2;i++)
    {
        res=n1*res;
    }
    printf("%d",res);
}
