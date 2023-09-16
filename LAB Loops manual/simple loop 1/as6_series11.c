// Write a C program to compute the value of nPr = n * (n - 1) * (n - 2) * ... * (n - r + 1), read n and r from user.
#include <stdio.h>
int main()
{
    int i, n, r, n_fact = 1, diff_fact = 1, diff;
    float nPr = 0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the value of r:");
    scanf("%d", &r);
    for (i = 1; i <= n; i++)
    {
        n_fact *= i;
    }
    diff = n - r;
    for (i = 1; i <= diff; i++)
    {
        diff_fact *= i;
    }
    float c_n_fact = (float)n_fact;
    float c_diff_fact = (float)diff_fact;
    nPr = (c_n_fact / c_diff_fact);
    printf("%dP%d: %.0f", n, r, nPr);

    return 0;
}