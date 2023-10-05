#include <stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE] = {1, 2, 3, 4, 1, 2, 5, 1, 1, 6};
    int deleting_number = 1, counter = 0, l;
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] == deleting_number)
        {
            counter++;
        }
    }
    printf("Times %d number in array = %d\n", deleting_number, counter);

    for (int i = 1; i <= counter; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (array[j] == deleting_number)
            {
                l = j;
                break;
            }
        }
        for (int m = l; m < SIZE; m++)
        {
            array[m] = array[m + 1];
        }
    }

    printf("Array after deleting %d =  ", deleting_number);
    for (int i = 0; i < SIZE - counter; i++)
    {
        printf("%d ", array[i]);
    }
}