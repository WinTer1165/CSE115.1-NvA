#include <stdio.h>
#include <string.h>

void meow_replace(char meow[100], char replacing_value, char new_value)
{

    for (int j = 0; meow[j] != '\0'; j++)
    {
        if (meow[j] == replacing_value)
        {
            meow[j] = new_value;
        }
        else
            continue;
    }

    printf("%s", meow);
}

int main()
{
    char meow[100];
    char replace, new;

    printf("Write something meow: ");
    gets(meow);
    printf("Which character you want to replace?: ");
    scanf("%c", &replace);
    printf("Which character you want to add?: ");
    scanf(" %c", &new);

    meow_replace(meow, replace, new);
}