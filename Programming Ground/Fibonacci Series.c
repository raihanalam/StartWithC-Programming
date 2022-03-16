#include<stdio.h>
int main()
{
    int i, n, j1 = 0, j2=1, next;

    printf("Enter limit: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", j1);
        next = j1 + j2;
        j1 = j2;
        j2 = next;
    }
    return 0;
}
