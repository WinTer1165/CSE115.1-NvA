#include <stdio.h>
int main()
{
    int i, j, n = 5, k;
    for (i = 1; i <= n; i++)
    {
        for (k = n; k >= i - 1; --k)
        {
            printf(" ");
        }

        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}