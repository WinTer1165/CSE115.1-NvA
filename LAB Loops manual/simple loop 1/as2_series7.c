// Write a program that computes the following series using for loop: 10000+2000+400+...+8
#include <stdio.h>

int main()
{
    int i, sum = 0;
    for (i = 10000; i >= 0; i /= 5)
    {
        printf("%d + ", i);
        if (i == 3)
        {
            sum += 8;
            printf("8");
            break;
        }
        else
            sum += i;
    }
    printf("\nSum: %d", sum);
}