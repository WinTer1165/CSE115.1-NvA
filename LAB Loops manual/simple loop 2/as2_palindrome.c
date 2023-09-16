#include <stdio.h>
int main()
{
    int user_num, num, reverse = 0, remainder;
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

    if (reverse == user_num)
    {
        printf("Valid! it's a palindrome.");
    }
    else
        printf("Invalid! it's not a palindrome.");
}