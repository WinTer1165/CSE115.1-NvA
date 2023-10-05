// Write a program that prints the no. of odd & no. of even numbers in an array.

#include <stdio.h>
#define SIZE 13
int main()
{
    int num[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int odd = 0, even = 0;
    for (int j = 0; j < SIZE; j++)
    {
        if (num[j] % 2 != 0)
        {
            printf("%d ", num[j]);
            odd++;
        }
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("%d ", num[i]);
            even++;
        }
    }
    printf("\nOdd numbers: %d\nEven numbers: %d", odd, even);
}