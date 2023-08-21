#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number: ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("It have 31 days");
    }
    else if (month == 2)
    {
        printf("It have 28 days");
    }
    else
        printf("It have 30 days");
}