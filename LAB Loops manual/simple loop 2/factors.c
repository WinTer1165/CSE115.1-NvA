#include <stdio.h>
int main()
{
    int user_num, i;
    printf("Enter a number: ");
    scanf("%d", &user_num);
    for (i = 1; i < user_num; i++)
    {
        if (user_num % i == 0)
        {
            if (i % 2 != 0)
            {
                printf("%d  ", i);
            }
        }
    }
}