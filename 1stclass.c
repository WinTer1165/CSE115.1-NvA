#include <stdio.h>
// replit/online code editor can not read windows.h library
//  #include <windows.h>

/* Home work
1. ID CARD.
2. Color output and produce beep sound.
3. Practice different data types in C.*/

int main()
{
    printf("\033[1;34m\t\tNorth South University\033[0m\n");
    printf("\033[1;31m\t\t   ECE Department\033[0m\n");
    printf("\033[1;30m\t\tStudent ID: 2322074042\033[0m\n\n");
    // Beep does not work since replit/online code editor can not read windows.h library
    // Beep function does not work in replit -- Beep(x,y) -- x means frequency and y means time in seconds
    // Beep(550, 500);
    // Beep(900, 500);
    printf("\033[1;30m  Name    : \033[0mMd Aminul Islam Labib    __________\n");
    printf("\033[1;30m  Hobby   : \033[0mChess                   |  =^_^=   |\n");
    printf("\033[1;30m  Why CSE : \033[0mI love using my PC      |          | \n  and probably get in big tech.      ```````````\n\n\n");

    // Primary Data Types in C

    // int data - 16/32bit size
    int intNumber = 11;
    printf("Integer Number: %d\n", intNumber);

    // float data - 32bit size
    float fltNumber = 10.5;
    printf("Floating Number: %f\n", fltNumber);
    printf("Floating Number with decimal: %.2f\n", fltNumber);

    // double data - 64bit size
    double dblNumber = 12.67;
    printf("Double Floating Number: %lf\n", dblNumber);
    printf("Double Floating Number with decimal: %.2lf\n", dblNumber);

    // character data - 8bit size
    char chrLetter1 = 'M';
    char chrLetter2 = '8';
    printf("Character 1: %c\nCharacter 2: %c\n", chrLetter1, chrLetter2);

    // Data Type Modifier

    // long modifier - 32bit size
    long int litNumber = 326895;
    printf("Long Integer Number: %ld\n", litNumber);

    // long long modifier - 64bit size
    long long int lliNumber = 254852141258354413;
    printf("Long Long Integer Number: %lld", lliNumber);
}
