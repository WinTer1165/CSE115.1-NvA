// Write a C program that reads an integer and then computes & prints the factorial of that integer
#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is: %d", n, fact);
}