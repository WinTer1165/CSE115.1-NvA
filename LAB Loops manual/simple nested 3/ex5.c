// Write a C program to print the n-th perfect number where n is an input.

#include <stdio.h>

int main()
{
    int n, i = 1, j, sum, count = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    while (count <= n)
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
            count++;
        }
        i++;
    }
    printf("The %d-th perfect number is %d\n", n, i - 1);
}