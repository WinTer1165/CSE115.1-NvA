//   1/2+2/(1+2)+3/(1+2+3)+....

#include <stdio.h>
int main()
{
    double i, j, sum1 = 0, sum2 = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("%0.lf/(", i);
        for (j = 1; j <= i; j++)
        {
            sum2 += j;
            if (j < i)
            {
                printf("%0.lf+", j);
            }
            else if (j == i)
            {
                printf("%0.lf)", j);
            }
        }
        printf(" + ");
        sum1 += (i / sum2);
        sum2 = 0;
    }
    printf("\nSUM: %.2lf", sum1);
}