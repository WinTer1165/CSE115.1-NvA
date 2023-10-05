#include <stdio.h>

int main()
{
    int array[10] = {1, 1, 1, 3, 4, 5, 1, 2, 1, 4};
    int smallest_value = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (smallest_value > array[i])
        {
            smallest_value = array[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == smallest_value)
        {
            printf("Index is %d\n", i);
        }
    }
}