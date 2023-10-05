#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int matrix[ROW][COL] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // (i) upper left
    int n = 3;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        n--;
        printf("\n");
    }
    printf("\n\n\n");

    // (ii) lower right
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
    printf("\n\n\n");

    // (iii) upper right
    n = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            printf("  ");
        }

        for (int j = n; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        n++;
        printf("\n");
    }
    printf("\n\n\n");

    // (iv) lower left triangle
    n = 2;
    for (int i = 0; i < 3; i++)
    {
        for (int k = i; k < 3; k++)
        {
            printf("  ");
        }

        for (int j = n; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        n--;
        printf("\n");
    }
    printf("\n\n\n");

    // (v) diagonal
    n = 2;
    for (int i = 0; i < 3; i++)
    {
        for (int k = i; k < 3; k++)
        {
            printf("  ");
        }
        for (int j = n; j == n; j--)
        {
            printf("%d ", matrix[i][j]);
        }
        n--;
        printf("\n");
    }
    printf("\n\n\n");

    // (vi) reverse diagonal
    n = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            printf("  ");
        }
        for (int j = n; j == n; j--)
        {
            printf("%d ", matrix[i][j]);
        }
        n++;
        printf("\n");
    }
    printf("\n\n\n");
}