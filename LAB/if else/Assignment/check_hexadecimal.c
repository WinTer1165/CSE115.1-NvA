#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character to check if it's hexadecimal number or not: ");
    scanf("%c", &ch);

    // if isxdigit(ch) outputs 128, then it is hexadecimal number. You will need to use #include <ctype.h> to use isxdigit().

    // shortcut and modern
    if (isxdigit(ch) == 128)
    {
        printf("%c is hexadecimal number.", ch);
    }
    else
        printf("%c not hexadecimal number", ch);

    // analogue and tons of writing:(
    //  if ((ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F') || (ch >= '0' && ch <= '9'))
    //  {
    //      printf("%c is hexadecimal number.", ch);
    //  }
    //  else
    //      printf("%c not hexadecimal number", ch);
}