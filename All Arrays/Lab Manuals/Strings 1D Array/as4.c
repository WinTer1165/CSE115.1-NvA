#include <stdio.h>

int main()
{
    int array[10] = {0, 1, 1, 3, 4, 5, 1, 2, 1, 4};
    int searching_value = 1;
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == searching_value)
        {
            counter++;
        }
    }
    printf("Search key appears %d times.\n", counter);
}