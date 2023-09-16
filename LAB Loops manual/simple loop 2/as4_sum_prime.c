#include <stdio.h>
int main()
{
    int user_num, num, remainder, sum = 0, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &user_num);
    num = user_num;

    while (num != 0)
    {

        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    printf("SUM: %d\n", sum);

    for (i = 1; i <= sum; i++)
    {
        if (sum % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is prime number.", sum);
    }
    else
        printf("%d is not prime number.", sum);
}