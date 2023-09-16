#include <stdio.h>
int main()
{
    int i, m = 10, n = 500, reverse, remainder, num, sum = 0;
    printf("Palindrome numbers between %d and %d are: ", m, n);
    for (i = m; i <= n; i++)
    {
        num = i;
        reverse = 0;
        // printf("Real number: %d ", num);
        while (num != 0)
        {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num /= 10;
        }
        // printf("Reverse number: %d\n", reverse);
        if (i == reverse)
        {
            sum += reverse;
            printf("%d  ", i);
        }
    }
    printf("\n SUM: %d", sum);
}