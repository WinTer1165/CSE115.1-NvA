#include <stdio.h>

long toBin(int);

int main()
{
    long binary_number;
    int decimal_number;
    printf(" Input any decimal number : ");
    scanf("%d", &decimal_number);
    binary_number = toBin(decimal_number);
    printf("\n The Binary value is : %ld\n\n", binary_number);

    return 0;
}
long toBin(int decimal_number)
{
    long binary_number = 0, remainder, f = 1;
    while (decimal_number != 0)
    {
        remainder = decimal_number % 2;
        binary_number = binary_number + remainder * f;
        f = f * 10;
        decimal_number = decimal_number / 2;
    }
    return binary_number;
}
