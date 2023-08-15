// LEAP YEAR
#include <stdio.h>

int main()
{
    int year, leap;

    printf("Enter the Year : ");
    scanf("%d", &year);

    leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    switch (leap)
    {

    case 1:
        printf("%d is Leap Year.\n", year);
        break;
    case 0:
        printf("%d is not Leap Year.\n", year);
        break;
    }
}
