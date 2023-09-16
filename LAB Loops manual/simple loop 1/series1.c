// Write a C program that computes the sum of the series: 3+7+11+...+n, where n is a user input
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 3; i <= n; i += 4)
    {
        printf("%d + ", i);
        sum += i;
    }
    printf("\nSUM: %d", sum);
}