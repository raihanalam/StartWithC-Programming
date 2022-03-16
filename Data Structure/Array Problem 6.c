#include<stdio.h>
struct user
{
    int id;
    char name[20];
};
int main()
{
    struct user e[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&e[i].id);
        fflush(stdin);
        gets(e[i].name);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",e[i].id);
        printf("%s\n",e[i].name);
    }
}
