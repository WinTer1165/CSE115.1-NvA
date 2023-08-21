#include <stdio.h>
int main()
{

    int myNum1, myNum2;

    printf("Enter a number: ");
    scanf("%d", &myNum1);
    printf("Enter a number again: ");
    scanf("%d", &myNum2);

    switch (myNum1 < myNum2)
    {
    case 1:
        printf("%d is minimum", myNum1);
        break;
    case 0:
        printf("%d is minimum", myNum2);
        break;
    }
}
