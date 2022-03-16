# include <stdio.h>
/*void fun(int *ptr)
{
    *ptr = 30;
}
int main()
{
    int y = 20;
    fun(&y);
    printf("%d", y);
    return 0;
}*/
/*int main()

{

int arr[] = {10, 20, 30, 40, 50, 60};

int *ptr1 = arr;

int *ptr2 = arr + 5;

printf("Number of elements between two pointer are: %d\n",(ptr2 - ptr1));

printf("Number of bytes between two pointers are: %d",(char*)ptr2 - (char*)ptr1);

return 0;
}*/
int main()
{
    char k='c',*p;
    p=&k;
    p++;
    printf("%u",*p);
}
