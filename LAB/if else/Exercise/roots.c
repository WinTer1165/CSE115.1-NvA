#include <stdio.h>
int main()
{
    int a, b, c, D;

    printf("Find nature of roots.\n");
    printf("ax^2+bx+c=0 \n\n");
    printf("Enter a value: ");
    scanf("%d", &a);
    printf("Enter b value: ");
    scanf("%d", &b);
    printf("Enter c value: ");
    scanf("%d", &c);

    D = b * b - 4 * a * c;
    printf("Discriminant D: %d. So, ", D);

    if (D < 0)
    {
        printf("No real root exist.");
    }
    else
        printf("Real roots exist");
}