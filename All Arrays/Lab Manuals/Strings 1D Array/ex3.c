/*
Write a C program to print all unique letters in an input string.
Sample input/output:
Enter a string: Hello how are you?
Unique letters in the input string (ignoring differences between lowercase & uppercase letters): a, e, h, l, o, r, u, w, y
*/
// Internet Solution: //
//  #include <stdio.h>
//  #include <ctype.h>
//  #include <string.h>

// int main()
// {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str);

//     int check[26] = {0};

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         char lower_character = tolower(str[i]);

//         if (isalpha(lower_character) && check[lower_character - 'a'] == 0)
//         {
//             check[lower_character - 'a'] = 1;
//             printf("%c ", lower_character);
//         }
//     }
//     return 0;
// }
