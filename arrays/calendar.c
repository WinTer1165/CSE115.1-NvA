#include <stdio.h>

int main()
{
    int calender[12][5][7] = {0};
    int i, j, k;

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                if (k == 5 || k == 6)
                {
                    calender[i][j][k] = 100;
                }
                else
                {
                    calender[i][j][k] = 0;
                }
            }
        }
    }

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                printf("%d ", calender[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}