#include &lt;stdio.h>
int main() {
    int a,b,c;
    printf("Enter 3 number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
       printf("A is largest");
       if(b>a && b>c)
          printf("B is largest");
       if(c>a && c>b)
          printf("C is lalargest");
   return 0;
}