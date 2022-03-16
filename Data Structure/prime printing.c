#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    for(a=1;a<=n;++a)
    {
        c=0;
        for(b=2;b<=a/2;b++)
        {
            if(a%b==0)
            {
                c++;
                break;
            }
        }
        if(c==0 && a!=1)
            printf("%d\n",a);
    }
}
