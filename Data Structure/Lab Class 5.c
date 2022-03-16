#include<stdio.h>
int *arraypass(int arr[],int n,int src)
{
    int i,loc=0;
    for(i=0;i<n;i++)
    {
      if(arr[i]==src)
      {
          loc=i;
          break;
      }
    }
    return loc+1;

}
/* main function to call above defined function /
int main () {
/ a pointer to an int */
int main()
{
    int *p;
    int i,n=5,src=3;
    int arr[5]={1,2,3,4,5};

    p = arraypass(arr,n,src);
    printf("position is %d",p);

    return 0;
}

