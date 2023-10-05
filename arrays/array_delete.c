#include <stdio.h>
int main()
{
    int p[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, i, n = 10, a = 3;
    a--;
    for (i = a; i <= n - 2; i++)
    {
        p[i] = p[i + 1];
    }
    p[n - 1] = 0;
    printf("Array after deleting the element is\n");
    for (i = 0; i <= n - 2; i++)
        printf("%d  ", p[i]);
}