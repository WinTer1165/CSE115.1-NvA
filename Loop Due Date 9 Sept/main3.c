#include <stdio.h>
int main()
{
    int i, j, k = 1, l, space = 4;
    for (i = 1; i <= 4; i++)
    {
        for (j = space; j >= i; j--)
        {
            printf(" ");
        }
        for (l = 1; l <= i; l++)
        {
            printf("%d ", k);
        }
        k++;
        printf("\n");
    }
}