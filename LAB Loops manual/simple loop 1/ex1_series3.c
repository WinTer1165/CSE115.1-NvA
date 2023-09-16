// Write a program to display all decimal digits (i.e., numbers in the range 0 - 9) in reverse order.
#include <stdio.h>
int main()
{
    int i, max, min;
    printf("Enter range of minimum: ");
    scanf("%d", &min);
    printf("Enter range of maximum: ");
    scanf("%d", &max);

    for (i = max; i >= min; i--)
    {
        printf("%d  ", i);
    }
}