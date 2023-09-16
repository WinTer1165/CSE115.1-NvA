#include <stdio.h>
int main()
{
    int i, j;
    double sum = 0, converted_j, n = 5;
    for (i = 1; i <= n; i++)
    {
        printf("("); // you can ignore this
        for (j = 1; j <= i; j++)
        {
            converted_j = (double)j;
            sum += (1 / converted_j);
            if (j == i) // you can ignore this
            {
                printf("1/%0.lf", converted_j); // you can ignore this
            }
            else                                   // you can ignore this
                printf("1/%0.lf + ", converted_j); // you can ignore this
        }
        printf(")"); // you can ignore this
        if (i == n)  // you can ignore this
        {
            printf(" "); // you can ignore this
        }
        else             // you can ignore this
            printf("+"); // you can ignore this
    }
    printf("\nSUM: %lf", sum);
}