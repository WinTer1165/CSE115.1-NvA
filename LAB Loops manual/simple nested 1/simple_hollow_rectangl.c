#include <stdio.h>
int main()
{
    int i, j, n = 10, m = 5;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == n || i == 1 || j == 1 || i == m)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}