#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a side: ");
    scanf("%d", &a);
    printf("Enter another side: ");
    scanf("%d", &b);
    printf("Enter another another side: ");
    scanf("%d", &c);

    // if (a+b>c && a+c>b && b+c>a)
    // {
    //     printf("Valid Triangle");
    // }

    if (a + b > c)
    {
        if (a + c > b)
        {
            if (b + c > a)
            {
                printf("Valid Triangle");
            }
        }
    }
    else
        printf("Invalid");
}