#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    switch (number % 5 == 0 && number % 2 == 0)
    {
    case 1:
        printf("Invalid!!! Divisible by both 2 and 5");
        break;
    case 0:
        switch (number % 5 == 0)
        {
        case 1:
            printf("Valid!!! Divisible by 5");
            break;
        case 0:
            switch (number % 2 == 0)
            {
            case 1:
                printf("Valid!!! Divisible by 2");
                break;

            case 0:
                printf("Invalid!!! Not disible by 2 or 5");
                break;
            }
            break;
        }
        break;
    }
}