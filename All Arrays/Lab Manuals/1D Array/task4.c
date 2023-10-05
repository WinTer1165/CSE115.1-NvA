// C Program to read an array from user and an index and then delete the element in that index of array

#include <stdio.h>

int main()
{
    int index = 2;
    int array[5] = {1, 2, 3, 4, 5};

    for (int i = index; i < 5; i++)
    {
        array[i] = array[i + 1];
    }
    for (int i = 0; i < 5 - 1; i++)
    {
        printf("%d ", array[i]);
    }
}