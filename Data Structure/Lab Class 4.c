#include<stdio.h>
int *arraypass(int arr[],int n,int pos)
{
    int i;
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

    return arr;
}
/* main function to call above defined function /
int main () {
/ a pointer to an int */
int main()
{
    int *p;
    int i,n=5,pos=3;
    int arr[5]={1,2,3,4,5};

    p = arraypass(arr,n,pos);

    for ( i = 0; i < 5-1; i++ )
    {
        printf("array [%d] = %d\n",i,*p);
        *p++;
    }
    return 0;
}
