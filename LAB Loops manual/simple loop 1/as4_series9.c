/*Write a program that takes a minimum number, a maximum number, and common ratio and prints the
sum of the geometric series between them.
Sample input/output (bold ones are inputs):
Enter minimum: 5
Enter maximum: 150
Enter Common ratio: 3
The Sum is: 5 + 15 + 45 + 135 = 200*/
#include <stdio.h>

int main()
{
    int i, max, min, ratio, sum = 0;
    printf("Enter range of minimum: ");
    scanf("%d", &min);
    printf("Enter range of maximum: ");
    scanf("%d", &max);
    printf("Enter common ratio: ");
    scanf("%d", &ratio);

    for (i = min; i <= max; i *= ratio)
    {

        sum += i;
        printf("%d ", i);
    }
    printf("\nSUM: %d", sum);
}