// C Program to read two arrays from user, add them, and then output their sum:

#include <stdio.h>
#define SIZE 100
int main()
{
    int n, sum = 0;
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
        sum += array1[i] + array2[i];
    }
    printf("SUM: %d", sum);
}