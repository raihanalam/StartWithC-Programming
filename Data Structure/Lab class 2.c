#include<stdio.h>
void insert(int n,int arr[]);
int main()
{
    int i,arr[10],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insert(n,arr);
    for(i=0;i<n+1;i++)
    {
       printf("%d\n",arr[i]);
    }

}
void insert(int n,int arr[])
{
    int x,i,pos;

    printf("Enter Pos:");
    scanf("%d",&pos);
    printf("Enter Value");
    scanf("%d",&x);

    for(i=n-1;i>=pos-1 ;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=x;
    return arr;
}
