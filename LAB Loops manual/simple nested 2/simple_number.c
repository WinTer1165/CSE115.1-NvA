
#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j >= i - 1; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}