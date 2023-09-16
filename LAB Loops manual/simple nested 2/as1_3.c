#include <stdio.h>
int main()
{
    int i, rows, j, ch, k = 1;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j >= i + 1; j--)
        {
            printf(" ");
        }
        ch = 'A';
        for (j = 1; j <= k; j++)
        {
            printf("%c", ch);
            ch++;
        }
        k += 2;
        printf("\n");
    }
}
