#include <stdio.h>
int main()
{
    double number1, number2;
    char operator;
    printf("Enter first number: ");
    scanf("%lf", &number1);
    printf("Enter the operator(+,-,/,*): ");
    scanf("\n");
    scanf("%c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &number2);

    switch (operator)
    {
    case '+':
        printf("%.2lf %c %.2lf = %.2lf", number1, operator, number2, number1 + number2);
        break;
    case '-':
        printf("%.2lf %c %.2lf = %.2lf", number1, operator, number2, number1 - number2);
        break;
    case '/':
        switch (number2 == 0)
        {
        case 1:
            printf("Sorry, you can not divide by zero.");
            break;
        case 0:
            printf("%.2lf %c %.2lf = %.2lf", number1, operator, number2, number1 / number2);
            break;
        }
        break;
    case '*':
        printf("%.2lf %c %.2lf = %.2lf", number1, operator, number2, number1 * number2);
        break;
    }
}