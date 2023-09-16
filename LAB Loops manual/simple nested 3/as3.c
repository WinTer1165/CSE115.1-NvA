#include <stdio.h>
int main()
{
    int i = 1, k = 1, n = 1204, rem, reverse, num;
    while (i <= n)
    {
        num = k;
        reverse = 0;
        while (num != 0)
        {
            rem = num % 10;
            reverse = reverse * 10 + rem;
            num /= 10;
        }
        if (k == reverse)
        {
            i++;
        }
        k++;
    }
    printf("The %dth palindrome number is %d", n, reverse);
}