#include &lt;stdio.h>
int main() {
    int n1,n2;
    printf("Enter two number: ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
      printf("%d is largest",n1);
    else
       printf("%d is largest",n2);
   return 0;
}