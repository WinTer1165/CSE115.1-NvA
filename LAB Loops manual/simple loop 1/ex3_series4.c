// Write a program to compute the following series using while loop: 4+11+18+....+n
#include <stdio.h>
int main()
{
    int i = 4, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    // for (i = 4; i <= n; i += 7)
    // {
    //     printf("%d + ", i);
    //     sum += i;
    // }
    while (i <= n)
    {
        printf("%d + ", i);
        sum += i;
        i += 7;
    }

    printf("\nSUM: %d", sum);
}