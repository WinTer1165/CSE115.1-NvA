#include <stdio.h>
#define max 100
int main()
{
    int p[max] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, n = 10, i, k = 2, j;

    for (j = n - 1; j >= k; j--)
    {
        p[j + 1] = p[j];
    }
    p[k] = 777;
    for (i = 0; i < n + 1; i++)
        printf("%d  ", p[i]);
}
