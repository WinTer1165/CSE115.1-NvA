#include <stdio.h>
int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_even[5], array_odd[5];
    int k = 0, l = 0;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 != 0)
        {
            array_odd[k] = array[i];
            k++;
        }
        else if (array[i] % 2 == 0)
        {
            array_even[l] = array[i];
            l++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array_even[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array_odd[i]);
    }
}