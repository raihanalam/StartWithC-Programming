#include<stdio.h>
int *arraypass(int arr[],int n,int item,int pos)
{
    int i;
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=item;

    return arr;
}
/* main function to call above defined function /
int main () {
/ a pointer to an int */
int main()
{
    int *p;
    int i,n=5,item=7,pos=3;
    int arr[5]={0,0,0,0,0};

    p = arraypass(arr,n,item,pos);

    for ( i = 0; i < 5+1; i++ )
    {
        printf("array [%d] = %d\n",i,*p);
        *p++;
    }
    return 0;
}
