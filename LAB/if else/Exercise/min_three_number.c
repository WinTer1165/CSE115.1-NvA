#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three number: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3)
    {
        printf("%d is minimum", num1);
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("%d is minimum", num2);
    }
    else
        printf("%d is minimum", num3);
}