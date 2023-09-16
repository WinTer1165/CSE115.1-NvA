// Write a C program to print the multiplication table (নামতা) of any given integer number.
#include <stdio.h>

int main()
{
    int i, n = 10;
    for (i = 1; i <= n; i++)
    {
        printf("%d*%d=%d\n", i, n, i * n);
    }
}