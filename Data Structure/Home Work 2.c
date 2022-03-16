#include<stdio.h>
struct user
{
    char s[20];
    int a;
    float b;
};
int main()
{
    struct user x;
    gets(x.s);
    scanf("%d",&x.a);
    scanf("%f",&x.b);

    puts(x.s);
    printf("%d\n",x.a);
    printf("%f",x.b);

}
