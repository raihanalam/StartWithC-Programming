#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",sum(&a,&b));

}
int sum(int *a,int *b)
{
  return *a+*b;;
}
