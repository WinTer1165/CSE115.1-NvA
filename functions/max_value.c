#include <stdio.h>
int max(int num1, int num2, int num3)
{

    if ((num1 > num2) && (num1 > num3))
    {
        printf("maximum number is %d\n", num1);
        if (num2 > num3)
        {
            printf("second largest %d", num2);
        }
        else if (num3 > num2)
        {
            printf("second largest is %d", num3);
        }
    }

    if ((num2 > num3) && (num2 > num1))
    {
        printf("maximum number is %d\n", num2);
        if (num1 > num3)
        {
            printf("second largest %d", num1);
        }
        else if (num3 > num1)
        {
            printf("second largest is %d", num3);
        }
    }

    if ((num3 > num2) && (num3 > num1))
    {
        printf("maximum number is %d\n", num3);
        if (num1 > num2)
        {
            printf("second largest %d", num1);
        }
        else if (num2 > num1)
        {
            printf("second largest is %d", num2);
        }
    }
    return 0;
}

int main()
{
    int a, b, c;
    printf("enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    max(a, b, c);
    return 0;
}