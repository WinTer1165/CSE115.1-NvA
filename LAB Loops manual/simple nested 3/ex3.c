// Write a C program to print the first k perfect numbers where k is an input.
// Can only take upto max value 4
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
            printf("%d  ", i);
        }
        i++;
    }
}