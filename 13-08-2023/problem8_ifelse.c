// MAXIMUM VALUE BETWEEN THREE NUMBERS

int main()
{

    int myNum1, myNum2, myNum3;

    printf("Enter a number: ");
    scanf("%d", &myNum1);
    printf("Enter a number again: ");
    scanf("%d", &myNum2);
    printf("Enter a number again again: ");
    scanf("%d", &myNum3);

    if (myNum1 > myNum2 && myNum1 > myNum3)
    {
        printf("%d is maximum", myNum1);
    }
    else if (myNum2 > myNum1 && myNum2 > myNum3)
    {
        printf("%d is maximum", myNum2);
    }
    else
    {
        printf("%d is maximum", myNum3);
    }
}
