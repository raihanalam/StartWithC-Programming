#include<stdio.h>
int opr(char *str[],int *x,float *y)
{
    strrev(str);
    *x=*x+*x;
    *y=*y+*y;
}
int main()
{
    char str[20];
    int x;
    float y;

    gets(str);
    scanf("%d",&x);
    scanf("%f",&y);
    opr(&str,&x,&y);
    printf("%s\n%d\n%f",str,x,y);
}
