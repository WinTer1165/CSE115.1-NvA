/*
Write a C program that reads a string, create a new string containing all the characters the input string except the vowels in it, and then prints the new string.
Sample input/output:
Enter a string: Hello how are you?
Output string: Hll hw r y?
*/

#include <stdio.h>
#include <string.h>

int meow_count(char meow[100])
{
    char meow_no_vowels[100];
    int len = strlen(meow);
    int counter = 0;

    for (int i = 0; i < len; i++)
    {
        if (meow[i] != 'a' && meow[i] != 'e' && meow[i] != 'i' && meow[i] != 'o' && meow[i] != 'u' && meow[i] != 'A' && meow[i] != 'E' && meow[i] != 'I' && meow[i] != 'O' && meow[i] != 'U')
        {
            meow_no_vowels[counter] = meow[i];
            counter++;
        }
    }
    meow_no_vowels[counter] = '\0';

    printf("%s", meow_no_vowels);
    return 0;
}

int main()
{
    char meow[100];
    printf("Write something: ");
    gets(meow);
    meow_count(meow);
}