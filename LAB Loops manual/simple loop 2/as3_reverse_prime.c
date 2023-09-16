#include <stdio.h>
int main()
{
    int user_num, num, reverse = 0, remainder, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &user_num);
    num = user_num;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Reverse number: %d\n", reverse);

    for (i = 1; i <= reverse; i++)
    {
        if (reverse % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is prime number.", reverse);
    }
    else
        printf("%d is not prime number.", reverse);
}
