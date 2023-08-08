// https://replit.com/@Muhammad-Aminul/Grade
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 93)
    {
        printf(" You got A grade");
    }
    else if (marks >= 90)
    {
        printf(" You got A- grade");
    }
    else if (marks >= 87)
    {
        printf(" You got B+ grade");
    }
    else if (marks >= 83)
    {
        printf("You got B grade");
    }
    else if (marks >= 80)
    {
        printf(" You got B- grade");
    }
    else if (marks >= 77)
    {
        printf("You got C+ grade");
    }
    else
        printf("You failed. Better luck next time.");
}