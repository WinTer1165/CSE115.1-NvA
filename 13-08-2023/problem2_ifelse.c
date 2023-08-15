/*
Write a C program to input number from user and check whether the
number is even or odd using sif else.

Example-

Input:
Input number: 12

Output:
Even number
*/

#include <stdio.h>

int main()
{
    int myNum;

    /* Input a number from user */
    printf("Enter any number to check even or odd: ");
    scanf("%d", &myNum);

    if (myNum % 2 == 0)
    {
        printf("Number is Even");
    }
    else
        printf("Number is Odd");
    return 0;
}