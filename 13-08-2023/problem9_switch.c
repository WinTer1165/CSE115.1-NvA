// Calculator

#include <stdio.h>

int main()
{
    int number1, number2;
    char mathOperation;
    printf("Enter what math operation you would like to use : ('+', '-', '/', '*','%'): ");
    scanf("%c", &mathOperation);
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);

    switch (mathOperation)
    {
    case '+':
        printf("%d %c %d = %d\n", number1, mathOperation, number2, number1 + number2);
        break;
    case '-':
        printf("%d %c %d = %d\n", number1, mathOperation, number2, number1 - number2);
        break;
    case '*':
        printf("%d %c %d = %d\n", number1, mathOperation, number2, number1 * number2);
        break;
    case '/':
        if (number2 == 0)
            printf("You cannot divide by 0! \n");
        else
            printf("%d %c %d = %d\n", number1, mathOperation, number2, number1 / number2);
        break;
    case '%':
        if (number2 == 0)
            printf("You cannot divide by 0! \n");
        else
            printf("%d %c %d = %d\n", number1, mathOperation, number2, number1 % number2);
        break;
    default:
        printf("Wrong mathematical operation.. Try again. \n");
        break;
    }
}