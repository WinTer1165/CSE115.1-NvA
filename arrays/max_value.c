#include <stdio.h>
#include <stdlib.h>

int compare(const void *num1, const void *num2)
{
    if (*(int *)num1 > *(int *)num2)
        return 1;
    else
        return -1;
}

int main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
    }
    qsort(num, 5, sizeof(int), compare);

    printf("The 5 numbers are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
    printf("MAXIMUM VALUE: %d", num[4]);
}