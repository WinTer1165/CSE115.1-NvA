// BMI CALCULATOR

#include <stdio.h>
int main()
{
    float height, weight, bmi;

    printf("Enter height in cm: ");
    scanf("%f", &height);

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    bmi = (weight / (height * height)) * 10000;

    printf("Your Body Mass Index(BMI) is %.2f\n", bmi);

    int converted_bmi;
    converted_bmi = (int)bmi;
    switch (converted_bmi)
    {
    case 1 ... 14:
        printf("Your BMI category is: Starvation\n");
        break;
    case 15 ... 16:
        printf("Your BMI category is: Anorexic\n");
        break;
    case 17 ... 18:
        printf("Your BMI category is: Underweight\n");
        break;
    case 19 ... 25:
        printf("Your BMI category is: Ideal\n");
        break;
    case 26 ... 27:
        printf("Your BMI category is: Overweight\n");
        break;
    case 28 ... 31:
        printf("Your BMI category is: Obese\n");
        break;
    case 32 ... 100:
        printf("Your BMI category is: Morbidly Obese\n");
        break;

    default:
        printf("Wrong entry\n");
        break;
    }

    return 0;
}
