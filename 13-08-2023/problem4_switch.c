/*
Write a C program to print message only if student id and password is correct.

Sample Input:

Enter your ID: 1165
Enter your password: 5125
Sample Output:

Welcome To Dashboard User
*/
#include <stdio.h>
int main()
{

    int student_id;
    int user_password;

    printf("Enter Your Student ID Number: ");
    scanf("%d", &student_id);

    switch (student_id)
    {
    case 1165:
        printf("Enter Password: ");
        scanf("%d", &user_password);

        switch (user_password)
        {
        case 5125:
            printf("Welcome To NSU Canvas User %d.\n", student_id);
            break;
        default:
            printf("Incorrect Password!!!");
            break;
        }
        break;

    case 1142:
        printf("Enter your password: ");
        scanf("%d", &user_password);

        switch (user_password)
        {
        case 5123:
            printf("Welcome To NSU Canvas User %d.\n", student_id);
            break;
        default:
            printf("Incorrect Password!!!");
            break;
        }
        break;

    case 5555:
        printf("Enter your password: ");
        scanf("%d", &user_password);

        switch (user_password)
        {
        case 9874:
            printf("Welcome To NSU Canvas User %d.\n", student_id);
            break;
        default:
            printf("Incorrect Password!!!");
            break;
        }
        break;
    default:
        printf("Enter a valid Student ID, please.");
        break;
    }
    return 0;
}