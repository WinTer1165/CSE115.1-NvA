// LEAP YEAR
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year:  ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("\n%d is the leap year.\n", year);
    }
    else if (year % 400 == 0)
    {
        printf("\n%d is the leap year.\n", year);
    }

    else
    {
        printf("\n%d is not the leap year.\n", year);
    }
    return 0;
}