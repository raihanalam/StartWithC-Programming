#include<stdio.h>
int *pass(int arr[],int max,int *top,int item);
int main()
{
    int *p;
    int i,top,max=10,item,arr[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%d",&top);
    for(i=0;i<3;i++)
    {
    scanf("%d",&item);
    p=pass(arr,max,&top,item);
    }
    printf("%d\n",top);
    for(i=0;i<max;i++)
     {
         printf("%d\n",*p);
         *p++;
    }
}
int *pass(int arr[],int max,int *top,int item)
 {
    if(*top==max)
    {
        printf("Overflow");
    }
    arr[*top]=item;
    *top=*top+1;
    return arr;
 }
