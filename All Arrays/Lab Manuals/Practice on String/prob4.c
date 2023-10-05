#include <stdio.h>
#include <string.h>

int meow_reverse(char meow[100])
{
    int len = strlen(meow), k = 0;
    char copy_meow[100];

    for (int i = 0; i < len; i++)
    {
        copy_meow[i] = meow[i];
    }
    for (int i = len - 1; i >= 0; i--)
    {
        meow[i] = copy_meow[k];
        k++;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c", meow[i]);
    }
    return 0;
}

int main()
{
    char meow[100];
    printf("Write something: ");
    gets(meow);
    meow_reverse(meow);
}