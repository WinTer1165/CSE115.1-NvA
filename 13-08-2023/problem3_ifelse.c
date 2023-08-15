/*
Write a C program to input a number and check positive negative or zero using if else.


Example-

Input:
Input number: 23
Output:
23 is positive
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("%d is negative.", num);
    }
    else if (num > 0)
    {
        printf("%d is positive.", num);
    }
    else
        printf("%d is zero.", num);

    return 0;
}