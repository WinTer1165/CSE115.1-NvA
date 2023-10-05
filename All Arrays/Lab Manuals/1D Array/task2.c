// C Program to find the largest value in a float type array

#include <stdio.h>

int main()
{
    float array[5] = {4.6789, 1.2034, 8.14560, 0.2666, 14.0125};
    float max = array[0];

    for (int i = 0; i < 5; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    printf("Largest value: %.2f", max);
}