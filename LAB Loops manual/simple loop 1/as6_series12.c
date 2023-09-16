/* Write a C program to find power of any number using for loop. Don’t use pow() function.
Example:
Enter base : 2
Enter power : 5
2 to the power 5 = 32
*/
#include <stdio.h>

int main()
{
    int i, power_product = 1, base = 2, power = 5;
    for (i = 1; i <= power; i++)
    {
        power_product *= base;
    }
    printf("%d", power_product);
}