#include <stdio.h>
#include <string.h>

int meow_compare(char meow1[100], char meow2[100])
{
    int counter1 = 0, counter2 = 0;
    for (int i = 0; meow1[i] != '\0'; i++)
    {
        counter1++;
    }
    for (int i = 0; meow2[i] != '\0'; i++)
    {
        counter2++;
    }
    if (counter1 == counter2)
    {
        printf("Equal\n");
        return 0;
    }
    else if (counter1 > counter2)
    {
        printf("First Meow Larger\n");
        return 1;
    }
    else if (counter1 < counter2)
    {
        printf("Second Meow Larger\n");
        return -1;
    }
}

int main()
{
    char meow1[100], meow2[100];
    printf("Write something meow: ");
    gets(meow1);
    printf("Write something again meow: ");
    gets(meow2);
    printf("%d", meow_compare(meow1, meow2));
}