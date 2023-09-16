#include <stdio.h>
int main()
{
    int i, j, rows, k = 2;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j >= i; j--)
        {
            printf(" ");
        }

        for (j = 1; j <= (i * 2 - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; i--)
    {
        for (j = 1; j <= k; j++)
        {
            printf(" ");
        }
        k += 1;
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, rows, k;
    printf (" Enter a number to define the rows: \n ");
    scanf("%d", &rows);
    int space = rows-1, num=1;
    printf("\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf("  "); / print the number
        }
        for ( k= 1; k <= num; k++)
        {
            printf(" *");
        }
        if(space > i)
        {
            space = space -1;
            num = num+2;
        }
        if(space <i)
        {
            space = space + 1;
            num = num -2;
        }
        printf("\n");
    }
}  */
