#include <stdio.h>
#define ROW 3
#define COL 3

int main()
{
    int matrixA[ROW][COL] = {2, -3, 1, 2, 0, -1, 1, 4, 5};
    int determinant;

    determinant = matrixA[0][0] * ((matrixA[1][1] * matrixA[2][2]) - (matrixA[2][1] * matrixA[1][2])) - matrixA[0][1] * (matrixA[1][0] * matrixA[2][2] - matrixA[2][0] * matrixA[1][2]) + matrixA[0][2] * (matrixA[1][0] * matrixA[2][1] - matrixA[2][0] * matrixA[1][1]);

    printf("Determinant: %d", determinant);
}