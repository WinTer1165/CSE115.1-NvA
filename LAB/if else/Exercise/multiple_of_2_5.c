#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 2 == 0)
    {
        printf("Invalid!!! %d is multiple of both 2 and 5", num);
    }
    else if (num % 5 == 0 || num % 2 == 0)
    {
        printf("Valid!!! %d is multiple of 2 or 5", num);
    }

    else
        printf("Invalid!!! %d is not multiple of 2 or 5.", num);
}