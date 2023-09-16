/*Write a C program to print all prime numbers between 1 and n in reverse order (n is an input).
Sample input/output:
Enter n: 20
All prime numbers between 1 and 20 (in reverse order):19, 17, 13, 11, 7, 5, 3, 2,*/

#include <stdio.h>

int main()
{
    int n, i, j, count;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("All prime numbers between 1 and %d (in reverse order):", n);
    for (i = n; i >= 1; i--)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
            printf("%d, ", i);
    }
    return 0;
}
