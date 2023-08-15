/*
Write a C program to input number from user and check whether the
number is even or odd using switch case.
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

    switch (myNum % 2)
    {

    case 0:
        printf("Number is Even");
        break;

    case 1:
        printf("Number is Odd");
        break;
    }

    return 0;
}