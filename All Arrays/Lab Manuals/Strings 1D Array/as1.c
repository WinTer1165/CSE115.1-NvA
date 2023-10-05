#include <stdio.h>
#define SIZE 10
int main()
{
    char array[SIZE] = {"AbAcAdFghA"};
    char deleting_character = 'A', counter = 0, l;
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] == deleting_character)
        {
            counter++;
        }
    }
    // for checking multiple characters use if with counter
    printf("Times %c character in array = %d\n", deleting_character, counter);

    for (int i = 1; i <= counter; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (array[j] == deleting_character)
            {
                l = j;
                break;
            }
        }
        for (int m = l; m < SIZE; m++)
        {
            array[m] = array[m + 1];
        }
    }

    printf("Array after deleting %c =  ", deleting_character);
    for (int i = 0; i < SIZE - counter; i++)
    {
        printf("%c ", array[i]);
    }
}