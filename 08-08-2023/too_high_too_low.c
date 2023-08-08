// https://replit.com/@Muhammad-Aminul/Too-High-Too-Low
#include <stdio.h>
int main()
{
    int number, myNum = 50;
    printf("Enter a number to win:  ");
    scanf("%d", &number);
    if (number < myNum)
    {
        printf("Low");
    }
    else if (number > myNum)
    {
        printf("High");
    }

    else
        printf("Winner!!!");
}