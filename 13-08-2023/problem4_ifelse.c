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
    if (student_id == 1165)
    {
        printf("Enter Password: ");
        scanf("%d", &user_password);
        if (user_password == 5125)
        {
            printf("Welcome To NSU Canvas User %d.\n", student_id);
        }
        else
            printf("Incorrect Password!!!");
    }
    if (student_id == 2569)
    {
        printf("Enter Password: ");
        scanf("%d", &user_password);
        if (user_password == 6666)
        {
            printf("Welcome To NSU Canvas User %d.\n", student_id);
        }
        else
            printf("Incorrect Password!!!");
    }
    if (student_id == 1234)
    {
        printf("Enter Password: ");
        scanf("%d", &user_password);
        if (user_password == 1234)
        {
            printf("Welcome To NSU Canvas User %d.\n", student_id);
        }
        else
            printf("Incorrect Password!!!");
    }
    else
        printf("Enter a valid Student ID, please.");

    return 0;
}