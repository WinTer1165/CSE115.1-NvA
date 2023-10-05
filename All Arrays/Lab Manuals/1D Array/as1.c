#include <stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE] = {1, 2, 3, 4, 1, 2, 5, 7, 1, 6};
    int deleting_number = 1, k;
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] == deleting_number)
        {
            k = i;
            break;
        }
    }
    for (int i = k; i < SIZE; i++)
    {
        array[i] = array[i + 1];
    }
    for (int i = 0; i < SIZE - 1; i++)
    {
        printf("%d ", array[i]);
    }
}