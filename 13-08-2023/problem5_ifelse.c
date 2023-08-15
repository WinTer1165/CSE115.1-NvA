/*
Write a C program to display user details using Id number.

Sample Input:
Enter your id: 13

Sample Output:
Information of id 13 is:
Name: Rusty shackleford
Contact: 123456***
Add: California

*/

#include <stdio.h>

int main()
{
    int user_id;

    printf("Enter User ID: ");
    scanf("%d", &user_id);

    if (user_id == 42)
    {
        printf("Information of ID number %d is:\n", user_id);
        printf("Name: Md Aminul Islam\nContact: 01712505323*\nAddress: Bashundhara RA\nBlood Group: B+");
    }
    if (user_id == 43)
    {
        printf("Information of ID number %d is:\n", user_id);
        printf("Name: Tushar Abdullah\nContact: 01625789311\nAddress: Rampura\nBlood Group: B+");
    }
    if (user_id == 44)
    {
        printf("Information of ID number %d is:\n", user_id);
        printf("Name: Mubin Khan \nContact: 01856962351\nAddress: Mymensingh\nBlood Group: O+");
    }
    else
        printf("Please Enter Valid Id number.");
    return 0;
}