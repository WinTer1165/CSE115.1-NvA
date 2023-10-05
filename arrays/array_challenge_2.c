/*
Write a program that initializes an array of digits (of your phone number)
For Example
        "1402945"--->1,4,0,2,9,4,5
        the program should find the MAX digit and index of the array and print it to the screen.

        "Maximum digit is: 9
         Index is: 4"

*/
#include <stdio.h>

#define SIZE 11

int main()
{
    int arr_phone_number[SIZE], phone_number, remainder, max, index;

    printf("Enter your eleven digits phone number: ");
    scanf("%d", &phone_number);

    for (int i = SIZE - 1; i > -1; i--)
    {
        remainder = phone_number % 10;
        arr_phone_number[i] = remainder;
        phone_number /= 10;
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", arr_phone_number[i]);
    }
    max = arr_phone_number[0];
    index = 0;
    for (int j = 0; j < SIZE; j++)
    {
        if (arr_phone_number[j] > max)
        {
            max = arr_phone_number[j];
            index = j;
        }
    }
    printf("\nMAXIMUM VALUE: %d", max);
    printf("\nINDEX OF MAXIMUM VALUE: %d", index);
}