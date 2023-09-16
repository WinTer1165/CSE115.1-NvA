/*Write a program that takes a minimum number, a maximum number, and common difference and prints
the sum of the arithmetic series between them.
Sample input/output (bold ones are inputs):
Enter minimum: 11
Enter maximum: 19
Enter Common difference: 2
The Sum is: 11 + 13 + 15 +17 +19 = 75*/
#include <stdio.h>

int main()
{
    int i, max, min, diff, sum = 0;
    printf("Enter range of minimum: ");
    scanf("%d", &min);
    printf("Enter range of maximum: ");
    scanf("%d", &max);
    printf("Enter difference: ");
    scanf("%d", &diff);

    for (i = min; i <= max; i += diff)
    {
        sum += i;
        printf("%d + ", i);
    }
    printf("\nSUM: %d", sum);
}