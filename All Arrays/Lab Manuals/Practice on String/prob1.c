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
int main()
{
    char meow[100];
    printf("Write something: ");
    gets(meow);
    printf("Length of '%s' is %d.", meow, meow_length(meow));
}