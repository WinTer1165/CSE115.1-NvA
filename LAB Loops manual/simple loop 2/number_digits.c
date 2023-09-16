#include <stdio.h>
int main()
{
    int user_num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &user_num);
    while (user_num != 0)
    {
        user_num /= 10;
        count++;
    }

    printf("total digits: %d\n", count);
}
