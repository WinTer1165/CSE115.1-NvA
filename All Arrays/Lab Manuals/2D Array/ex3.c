#include <stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int sum = 0;
    int matrix[ROW][COL] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (matrix[i][j] % 2 == 0)
            {
                sum += matrix[i][j];
            }
        }
    }
    printf("SUM: %d", sum);
}