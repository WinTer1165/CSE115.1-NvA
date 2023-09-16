// Write a program to compute the following series using while loop : 52 + 92 + 152 + 232 + ....+ n2
#include <stdio.h>

int main()
{
    int i = 5, sum = 0, n = 16, diff = 4, k = 5;

    // for (i = 1; i <= n; i++)
    // {
    //     if (i == n)
    //     {
    //         printf("%d^2", k);
    //     }
    //     else
    //         printf("%d^2 + ", k);
    //     sum += k * k;
    //     k += diff;
    //     diff += 2;
    // }
    // printf("\nSUM: %d", sum);
    // while (i <= n)
    // {
    //     if (i == n)
    //     {
    //         printf("%d^2", k);
    //     }
    //     else
    //         printf("%d^2 + ", k);
    //     sum += k * k;
    //     k += diff;
    //     diff += 2;
    //     i++;
    // }
    // printf("\nSUM: %d", sum);

    while (i <= n)
    {
        printf("%d^2 + ", i);
        sum += i * i;
        i += diff;
        diff += 2;
    }
    printf("\nSUM: %d", sum);
}