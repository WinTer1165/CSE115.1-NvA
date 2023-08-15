/**
 Write a C program to input week number(1-7) and print day of week name using if else.

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

    if (week == 1)
    {
        printf("Sunday");
    }
    else if (week == 2)
    {
        printf("Monday");
    }
    else if (week == 3)
    {
        printf("Tuesday");
    }
    else if (week == 4)
    {
        printf("Wednesday");
    }
    else if (week == 5)
    {
        printf("Thursday");
    }
    else if (week == 6)
    {
        printf("Friday");
    }
    else if (week == 7)
    {
        printf("Saturday");
    }
    else
        printf("Invalid input! Please enter week number between 1-7.");
    return 0;
}