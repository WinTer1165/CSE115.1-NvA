#include <stdio.h>

int main()
{
    int matrixA[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d   ", matrixA[i][j]);
        }
        printf("\n");
    }
}