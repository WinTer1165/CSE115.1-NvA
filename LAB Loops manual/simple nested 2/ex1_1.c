#include <stdio.h>
int main()
{
    int i, j, rows, k = 1;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= k; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
}