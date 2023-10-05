#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int matrix[ROW][COL] = {1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 9};
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == 2 || j == 0 || j == 3)
            {
                printf("%d ", matrix[i][j]);
                sum += matrix[i][j];
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("SUM: %d", sum);
}