/*
Write a program that initializes an array of digits (of your phone number)
For Example
        "1402945"--->1,4,0,2,9,4,5
        the program should find the MAX digit and print it to the screen.

        "Maximum digit is: 9"
*/
#include <stdio.h>

int main()
{
    int arr_phone_number[11], phone_number, remainder, max;

    printf("Enter your eleven digits phone number: ");
    scanf("%d", &phone_number);

    for (int i = 10; i > -1; i--)
    {
        remainder = phone_number % 10;
        arr_phone_number[i] = remainder;
        phone_number /= 10;
    }
    for (int i = 0; i < 11; i++)
    {
        printf("%d  ", arr_phone_number[i]);
    }
    max = arr_phone_number[0];
    for (int j = 0; j < 11; j++)
    {
        if (arr_phone_number[j] > max)
        {
            max = arr_phone_number[j];
        }
    }
    printf("\nMAXIMUM VALUE: %d", max);
}