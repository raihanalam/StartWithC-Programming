#include<stdio.h>
struct add
{
    int class[3];
    char flight[10],from[10],to[15],air[20],time[10];
};
int main()
{
    char str[20000],c;
    int i=0,line=0,sn,size=0,index=0;
    struct add n;

    FILE *cpy;
    cpy=fopen("d:\\project\\flight1.txt", "r");
    while((c=fgetc(cpy)) != EOF)
    {
        str[i]=c;
        i++;
    }
    str[i]='\0';
    fclose(cpy);
    printf("Enter SNO Number:");
    scanf("%d",&sn);

    for(i=0;str[i]!='\0';i++)
    {
       if(str[i]=='\n')
       {
            line++;
            if(line==sn)
            {
                index=i;
            }
       }
    }
    for(i=index+1;str[i]!='\n';i++)
    {
        size++;
    }
    printf("Enter Flight NO:");
    fflush(stdin);
    gets(n.flight);
    printf("Enter From:");
    gets(n.from);
    printf("Enter To:");
    gets(n.to);
    printf("Enter E Class:");
    scanf("%d",&n.class[0]);
    printf("Enter B Class:");
    scanf("%d",&n.class[1]);
    printf("Enter F Class:");
    scanf("%d",&n.class[2]);
    printf("Enter Time:");
    fflush(stdin);
    gets(n.time);
    printf("Enter Airline:");
    gets(n.air);
}
