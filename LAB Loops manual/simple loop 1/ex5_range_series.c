// Write a program to print all even numbers between m and n (m, n are user inputs) in reverse order.

#include <stdio.h>
int main()
{
    int i, max, min;
    printf("Enter range of minimum: ");
    scanf("%d", &min);
    printf("Enter range of maximum: ");
    scanf("%d", &max);
    printf("All even numbers between %d and %d in reverse order: ", min, max);
    for (i = max; i >= min; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d  ", i);
        }
    }
}