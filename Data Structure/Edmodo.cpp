#include <stdio.h>
int  *arraypass(int arr[] ) {
   int i;
   for (i=1; i<4; i++)
    arr[i] = i;
   return arr;
}
// main function to call above defined function
int main () {
   int *p;
   int i;
   int arr[5] = {0,0,0,0,0};

   p = arraypass(arr);

   for ( i = 0; i < 5; i++ ) {
      printf("array %d = %d\n",i,*p);
      *p++;
   }
   return 0;
}
