#include <stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE] = {10, 7, 3, 4, 9, 2, 2, 70, 1, 6};
    int temporary_meow;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (array[i] > array[j])
            {
                temporary_meow = array[i];
                array[i] = array[j];
                array[j] = temporary_meow;
            }
        }
    }
    for (int q = 0; q < SIZE; q++)
    {
        printf("%d ", array[q]);
    }
    printf("\n2nd Largest Value :%d and index: %d\n2nd Smallest Value :%d and index: %d", array[SIZE - 2], SIZE - 2, array[1], 1);
}

// related article
// https://linuxhint.com/sort-array-c-programming