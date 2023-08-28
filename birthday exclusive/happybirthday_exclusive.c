#include <stdio.h>
#include <windows.h>

void Happy_Birthday();
void cake();

int main()
{
    cake();
    Happy_Birthday();
    printf("\n\n");
    return 0;
}

void Happy_Birthday()
{
    char *happy_message[] = {"H", "a", "p", "p", "y ", "B", "i", "r", "t", "h", "d", "a", "y ", "t", "o ", "t", "h", "e ", "b", "e", "s", "t ", "C", "S", "E ", "t", "e", "a", "c", "h", "e", "r ", "a ", "s", "t", "u", "d", "e", "n", "t ", "c", "o", "u", "l", "d ", "a", "s", "k ", "f", "o", "r!"};
    for (int i = 0; i <= 51; i++)
    {
        printf("%s", happy_message[i]);
        Sleep(350);
    }
}

void cake()
{
    printf("\t\t      $$  $$  $$\n");
    Sleep(100);
    printf("\t\t    __||__||__||__\n");
    Sleep(100);
    printf("\t\t   | * * * * * * *|\n");
    Sleep(100);
    printf("\t\t   |* * * * * * * |\n");
    Sleep(100);
    printf("\t\t   | * * * * * * *|\n");
    Sleep(100);
    printf("\t\t   |______________|\n\n\n");
}