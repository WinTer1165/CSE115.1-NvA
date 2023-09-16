#include <stdio.h>
int main()
{
    int i, j, k = 1, n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {

            if (k > 9)
            {
                k = 0;
            }
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
}