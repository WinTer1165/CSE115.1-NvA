// Write a program to compute the following series using while loop: 2^3+5^3+8^3+...+n^3

#include <stdio.h>
int main()
{
    int i, n, sum = 0, product;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 3)
    {
        product = 1;
        printf("%d^3 + ", i);
        product *= (i * i * i);
        sum += product;
    }
    printf("n\nSUM: %d", sum);
}