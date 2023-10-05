#include <stdio.h>
#define ROW 3
#define COL 3

int main()
{
    int matrixA[ROW][COL] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matrixB[ROW][COL] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matrixC[ROW][COL];
    int matrixD[ROW][COL];

    int resultant = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixC[i][j] = ((5 * matrixA[i][j]) + (7 * matrixB[i][j]) + 9);
        }
    }
    printf("Here's the matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
}