#include<stdio.h>
int opr(char s[],int x,double y);
int main()
{
    char s[20];
    int x;
    double y;

    gets(s);
    scanf("%d%lf",&x,&y);
    printf("%d\n",opr(s,x,y));

}
int opr(char s[],int x,double y)
{
    char s1[20];
    int i,fact=1;

    strupr(s);
    strcpy(s1,s);
    puts(s1);

    y=pow(y,2);
    printf("%lf\n",y);

    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
