/*Write a C program to compute and print the sum of all prime numbers between m and max (m, max are inputs)*/

#include <stdio.h>

int main()
{
    int i, j, sum = 0, min = 5, max = 20, count;
    printf("Prime numbers are: ");
    for (i = min; i <= max; i++)
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
        {
            sum += i;
            printf("%d  ", i);
        }
    }
    printf("SUM: %d", sum);
}