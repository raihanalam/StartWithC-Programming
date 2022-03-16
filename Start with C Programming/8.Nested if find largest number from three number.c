#include &lt;stdio.h>
int main() {
    int a,b,c;
    printf("Enter 3 number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
       printf("%d is largest",a);
       if(b>a && b>c)
          printf("%d is largest",b);
       if(c>a && c>b)
          printf("%d is lalargest",c);
       if(a==b && b==c && c==a)
          printf("You entered three equal number");
   return 0;
}