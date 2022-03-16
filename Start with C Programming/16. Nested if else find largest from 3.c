#include &lt;stdio.h>
int main() {
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
      printf("%d is largest",a);
      else if(b>a && b>c)
         printf("%d is largest",b);
      else if(c>a && c>b)
         printf("%d is largest",c);
    else("You entered equal number");
   return 0;
}