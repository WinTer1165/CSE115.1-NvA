// Write a program reads two arrays from user and then output their product

#include <stdio.h>
#define SIZE 100
int main()
{
    int n, product = 1;
    int array1[SIZE], array2[SIZE];
    printf("No of array elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        product *= array1[i] * array2[i];
    }
    printf("PRODUCT: %d", product);
}