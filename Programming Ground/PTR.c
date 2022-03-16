#include <stdio.h>

int main()

{

    char *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
    *ptr += 5;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
    (*ptr)++;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);

    printf("%d\n",sizeof(ptr));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(double));

    return 0;
}


