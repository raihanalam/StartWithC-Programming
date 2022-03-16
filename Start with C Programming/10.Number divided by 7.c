#include &lt;stdio.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    
    if(num%7==0)
      printf("Number is Divided by 7");
    else
       printf("Number is not Divided by 7");
   return 0;
}