#include <stdio.h>
#include <string.h>

int meow_length(char meow[100])
{
    int counter = 0;
    for (int i = 0; meow[i] != '\0'; i++)
    {
        counter++;
    }
    return counter;
}

int meow_search(char meow[100], char searching_value)
{
    for (int i = 0; i < meow_length(meow); i++)
    {
        if (meow[i] == searching_value)
        {

            return 1;
        }
    }
    return 0;
}

int main()
{
    char meow[100], key;
    printf("Write something: ");
    gets(meow);
    printf("What do you want to search?: ");
    scanf("%c", &key);
    if (meow_search(meow, key) == 1)
    {
        printf("Found");
    }
    else
        printf("Not Found");
}