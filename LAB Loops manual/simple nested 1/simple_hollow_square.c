#include <stdio.h>
int main()
{
    int i, j, n = 10;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == n || i == 1 || j == 1 || i == n)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}