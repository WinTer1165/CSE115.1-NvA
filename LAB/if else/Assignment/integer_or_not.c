#include <stdio.h>
#include <ctype.h>
int main()
{
    float number, difference;
    int converted_number;
    printf("Enter a character to check if it's integer or not: ");
    scanf("%f", &number);

    converted_number = (int)number;
    difference = number - converted_number;

    if (difference < 0 || difference > 0)
    {
        printf("%.4f is Not an Integer", number);
    }
    else
        printf("%d is Integer", converted_number);
}