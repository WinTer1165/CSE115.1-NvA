#include <stdio.h>
int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    switch (number % 2 == 0)
    {
    case 1:
        printf("Even");
        break;

    case 0:
        printf("Odd");
        break;
    }
}