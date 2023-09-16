#include <stdio.h>
int main()
{
    int user_num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &user_num);
    for (i = 1; i < user_num; i++)
    {
        if (user_num % i == 0)
        {
            sum += i;
            printf("%d + ", i);
            if (sum == user_num)
            {

                printf(" : Perfect Number");
            }
        }
    }
}