// https://replit.com/@Muhammad-Aminul/vowel

#include <stdio.h>

int main()
{
    char myCharacter;
    printf("Enter an alphabet: ");
    scanf("%c", &myCharacter);

    switch (myCharacter)
    {
    case 'a':
        printf("A or a is vowel.");
        break;
    case 'A':
        printf("A or a is vowel.");
        break;
    case 'e':
        printf("E or e is vowel.");
        break;
    case 'E':
        printf("E or e is vowel.");
        break;
    case 'i':
        printf("I or i is vowel.");
        break;
    case 'I':
        printf("I or i is vowel.");
        break;
    case 'o':
        printf("O or o is vowel.");
        break;
    case 'O':
        printf("O or o is vowel.");
        break;
    case 'U':
        printf("U or u is vowel.");
        break;
    case 'u':
        printf("U or u is vowel.");
        break;

    default:
        printf("Sorry, %c is not vowel.", myCharacter);
        break;
    }
}
