#include<stdio.h>
int *pass(int arr[],int max,int *top);
int main()
{
    int *p;
    int i,top=5,max=10,arr[10]={34,45,20,34,67,0,0,0,0,0};

    p=pass(arr,max,&top);
    printf("%d\n",top);
    for(i=0;i<top;i++)
    {
         printf("%d\n",*p);
         *p++;
    }
}
int *pass(int arr[],int max,int *top)
 {
    int item;
    if(*top==-1)
    {
        printf("Underflow");
    }
    item=arr[*top];
    *top=*top-1;
    return arr;
 }

