#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two number: \n");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        printf("%d is minimum", num1);
    }
    else
        printf("%d is minimum", num2);
}