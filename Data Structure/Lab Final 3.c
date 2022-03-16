#include<stdio.h>
void binary(int arr[],int n,int key)
{
    int loc=0,first=1,last=n,mid;
    mid=(first+last)/2;
    while(first<last)
    {
        if(arr[mid]==key)
        {
          loc=mid+1;
          break;
        }
        else if(key>arr[mid])
            first=mid+1;
        else
            last=mid-1;
        mid=(first+last)/2;
    }
    if(first>last)
        printf("Not Found");
    else
        printf("Location is %d",loc);
}
int main()
{
    int arr[7]={6,10,20,30,55,75,190};
    int n=7,key=55;
    binary(arr,n,key);
    return 0;
}
