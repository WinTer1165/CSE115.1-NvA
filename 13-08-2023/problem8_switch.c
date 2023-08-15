// MAXIMUM VALUE BETWEEN THREE NUMBERS

#include <stdio.h>
int main()
{

    int myNum1, myNum2, myNum3, logic;

    printf("Enter a number: ");
    scanf("%d", &myNum1);
    printf("Enter a number again: ");
    scanf("%d", &myNum2);
    printf("Enter a number again again: ");
    scanf("%d", &myNum3);
    logic = myNum1 > myNum2 && myNum1 > myNum3;

    switch (logic)
    {
    case 1:
        printf("%d is maximum", myNum1);
        break;
    case 0:
        switch (myNum2 > myNum3)
        {
        case 1:
            printf("%d is maximum", myNum2);
            break;

        case 0:
            printf("%d is maximum", myNum3);
            break;
        }
    }
}
