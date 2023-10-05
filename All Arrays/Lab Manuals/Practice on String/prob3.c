#include <stdio.h>
#include <string.h>

int meow_count(char meow[100])
{
    int len = strlen(meow);
    int counter = 0;
    for (int i = 0; i < len; i++)
    {
        if (meow[i] == 'a' || meow[i] == 'e' || meow[i] == 'i' || meow[i] == 'o' || meow[i] == 'u' || meow[i] == 'A' || meow[i] == 'E' || meow[i] == 'I' || meow[i] == 'O' || meow[i] == 'U')
        {
            counter++;
        }
    }
    printf("Vowels: %d\nConsonants: %d", counter, len - counter);
    return 0;
}

int main()
{
    char meow[100];
    printf("Write something: ");
    gets(meow);
    meow_count(meow);
}