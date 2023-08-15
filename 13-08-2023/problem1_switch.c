/**
 Write a C program to input week number(1-7) and print day of week name using switch
 case.
Example-

Input:
Input week number(1-7): 2

Output:
Tuesday
 */

#include <stdio.h>

int main()
{
    int week;

    /* Input week number from user */
    printf("Enter week number(1-7): ");
    scanf("%d", &week);

    switch (week)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}