#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter an angle: ");
    scanf("%d", &a);
    printf("Enter another angle: ");
    scanf("%d", &b);
    printf("Enter another another angle: ");
    scanf("%d", &c);

    if (a + b + c == 180)
    {
        printf("Valid triangle");
    }
    else
        printf("Invalid");
}