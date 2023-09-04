#include <stdio.h>
int main()
{
    int i, j, k, l, m;

    for (i = 1; i <= 10; i += 2)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 20; k += 3)
            {
                for (l = 1; l < 4; l++)
                {
                    for (m = 0; m < 3; m++)
                    {
                        printf("i: %d   j: %d   k: %d   l: %d   m: %d \n", i, j, k, l, m);
                    }
                }
            }
        }
    }
}