// Grade system

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (marks)
    {
    case 93 ... 100:
        printf(" You got A grade");
        break;
    case 90 ... 92:
        printf(" You got A- grade");

        break;
    case 87 ... 89:
        printf(" You got B+ grade");

        break;
    case 83 ... 86:
        printf("You got B grade");

        break;
    case 80 ... 82:
        printf(" You got B- grade");
        break;
    default:
        printf("You failed. Better luck next time.");
        break;
    }
}