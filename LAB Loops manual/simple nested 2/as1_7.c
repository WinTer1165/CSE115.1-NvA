#include <stdio.h>
int main()
{
    int i, j, k = 1, n = 5, l = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf(" ");
        }

        for (j = 1; j <= l; j++)
        {

            if (k > 9)
            {
                k = 0;
            }
            printf("%d", k);
            k++;
        }
        l += 2;
        printf("\n");
    }
}