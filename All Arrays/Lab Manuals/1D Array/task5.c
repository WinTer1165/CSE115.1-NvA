// C Program to find the number of spaces in a string (character array)

#include <stdio.h>

int main()
{
    char array[100];
    int counter = 0;
    gets(array);
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (array[i] == ' ')
        {
            counter++;
        }
    }
    printf("Number of space: %d", counter);
}
