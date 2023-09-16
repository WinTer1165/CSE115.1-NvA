#include <stdio.h>
int main()
{
    int user_num, remainder, first_number, second_number;
    printf("Enter a number: ");
    scanf("%d", &user_num);

    remainder = user_num % 10;
    second_number = remainder;

    while (user_num >= 10)
    {
        user_num /= 10;
        first_number = user_num;
    }

    // first_number = user_num / 10;
    printf("first number: %d\n", first_number);
    printf("second number: %d\n", second_number);
}