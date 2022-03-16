#include &lt;stdio.h>
int main() {
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    if(a>b)
       printf("%d is largest",a);
       if(b>a)
          printf("%d is laargest",b);
    else
       printf("%d and %d is equal number",a,b);
   return 0;
}