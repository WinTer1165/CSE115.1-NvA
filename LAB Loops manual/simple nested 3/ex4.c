#include <stdio.h>
int main()
{
    int i, j, n = 10000, sum, sum2 = 0;
    for (i = 2; i <= n; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d  ", i);
            sum2 += i;
        }
    }
    printf("\nSUM: %d", sum2);
    return 0;
}