#include <stdio.h>

#define SIZE 10
int main()
{
    int table[SIZE][SIZE];
    for (int i = 1; i <= SIZE; i++)
    {
        for (int j = 1; j <= SIZE; j++)
        {
            table[i - 1][j - 1] = i * j;
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%4d", table[i][j]);
        }
        printf("\n");
    }
}
