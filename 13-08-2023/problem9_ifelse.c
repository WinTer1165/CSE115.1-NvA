// Calculator

#include <stdio.h>

int main()
{
    int number1, number2;
    char mathOperation;
    printf("Enter what math operation you would like to use : ('+', '-', '/', '*'): ");
    scanf("%c", &mathOperation);
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);

    if (number2 == 0)
    {
        if (mathOperation == '/')
        {
            printf("You cannot divide by 0! \n");
        }
    }

    else if (mathOperation == '+')
    {
        printf("%d %c %d = %d\n", number1, mathOperation, number2, number1 + number2);
    }
    else if (mathOperation == '-')
    {
        printf("%d %c %d = %d\n", number1, mathOperation, number2, number1 - number2);
    }
    else if (mathOperation == '/')
    {
        printf("%d %c %d = %d\n", number1, mathOperation, number2, number1 / number2);
    }
    else if (mathOperation == '*')
    {
        printf("%d %c %d = %d\n", number1, mathOperation, number2, number1 * number2);
    }
}