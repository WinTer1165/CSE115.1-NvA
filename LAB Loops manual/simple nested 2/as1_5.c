#include <stdio.h>
int main()
{
    int i, j, rows, ch = 'A';
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
        }
        ch++;
        printf("\n");
    }
}
