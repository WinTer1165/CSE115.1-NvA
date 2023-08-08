// https://replit.com/@Muhammad-Aminul/Poor-Rich
#include <stdio.h>
int main()
{
    int money;
    printf("How much money you have?  ");
    scanf("%d", &money);

    if (money <= 5)
    {
        printf("Poor");
    }
    else
        printf("Rich Kids");
}