#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = rows; j >= i; j--)
        {
            if (j == i || j == rows || i == 1)
            {
                printf("*");
            }
            else
                printf(" ");
        }

        printf("\n");
    }
}
