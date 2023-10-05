#include <stdio.h>

int main()
{
    char str[100];
    int no_of_uppercase_alphabet = 0, no_of_lowercase_alphabet = 0, array_size = 0;
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        array_size++;
    }
    for (int j = 0; j < array_size; j++)
    {
        if (str[j] >= 'a' && str[j] <= 'z')
        {
            no_of_lowercase_alphabet++;
        }
    }
    no_of_uppercase_alphabet = array_size - no_of_lowercase_alphabet;
    printf("No of Lowercase alphabet:  %d \nNo of Uppercase alphabet:  %d", no_of_lowercase_alphabet, no_of_uppercase_alphabet);
}