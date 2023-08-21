#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);
    switch (isalpha(ch) == 0)
    {
    case 1:
        printf("%c is digit", ch);
        break;
    case 0:;
        printf("%c is alphabet", ch);
        break;
    }
}