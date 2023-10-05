#include <stdio.h>

int main()
{
    char str[100];
    int no_of_alphabet = 0, counter = 0;
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        no_of_alphabet++;
    }
    int j = no_of_alphabet;
    for (int i = 0; i < no_of_alphabet; i++)
    {
        j--;
        if (str[i] == str[j])
        {
            counter++;
        }
    }
    if (counter == no_of_alphabet)
    {
        printf("%s is palindrome", str);
    }
    else
        printf("%s is not palindrome", str);
}