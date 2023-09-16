#include <stdio.h>
int main()
{
    int i, rows, j, ch;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j >= i + 1; j--)
        {
            printf("*");
        }
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}
