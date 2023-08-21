#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 11 == 0 && num % 5 == 0)
    {
        printf("%d is multiple of both 5 and 11.", num);
    }
    else if (num % 11 == 0)
    {
        printf("%d is multiple of 11", num);
    }
    else if (num % 5 == 0)
    {
        printf("%d is multiple of 5", num);
    }

    else
        printf("%d is not multiple of 5 or 11.", num);
}