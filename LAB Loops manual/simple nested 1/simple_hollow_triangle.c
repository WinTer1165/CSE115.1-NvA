#include <stdio.h>
int main()
{
    int i, j, n = 10, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == i || i == n || j == 1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}