// Write a C program to print all odd numbers from 1 to n (n is user input) using for loop.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Odd Numbers: ");
    for (i = 1; i <= n; i += 2)
    {
        printf("%d, ", i);
    }
}