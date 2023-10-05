#include <stdio.h>

int main()
{
    int array[10] = {1, 5, 1, 3, 4, 5, 5, 2, 1, 4};
    int largest_value = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (largest_value < array[i])
        {
            largest_value = array[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == largest_value)
        {
            printf("Index is %d\n", i);
        }
    }
}