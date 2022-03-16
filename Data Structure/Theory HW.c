#include<stdio.h>
int main()
{
    int i,arr[5]={4,12,9,8,17};
    char arr1[5]="Hello";
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
            printf("%d\n",arr[i]);
    }
    for(i=5;i>=0;i--)
    {
        if(arr1[i]=='a' || arr1[i]=='e' || arr1[i]=='i' || arr1[i]=='o' || arr[i]=='u')
            printf("%c\n",arr1[i]);
    }
}
