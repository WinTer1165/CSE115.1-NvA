#include <stdio.h>
#define USER_NUMBER_MAX_SIZE 5
int main()
{
    int user_input, input_to_array[USER_NUMBER_MAX_SIZE], remainder, i = USER_NUMBER_MAX_SIZE - 1, check_NUMBER, j, counter;
    printf("Enter a number max upto 5 digits: ");
    scanf("%d", &user_input);

    while (user_input != 0)
    {
        remainder = user_input % 10;
        input_to_array[i] = remainder;
        user_input /= 10;
        i--;
    }
    for (i = 0; i < USER_NUMBER_MAX_SIZE; i++)
    {
        counter = 0;
        check_NUMBER = input_to_array[i];

        for (j = 0; j < USER_NUMBER_MAX_SIZE; j++)
        {
            if (check_NUMBER == input_to_array[j])
            {
                counter++;
            }
        }
        if (counter == 2)
        {
            printf("YES");
            break;
        }
    }
}