#include <stdio.h>
#define SIZE 100
int main()
{
    float array[SIZE];
    int N = 5;
    for (int i = 0; i < N; i++)
    {
        scanf("%f", &array[i]);
    }
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    float average = sum / N;
    printf("Average: %f\n", average);
    for (int i = 0; i < N; i++)
    {
        if (array[i] > average)
        {
            printf("%.0f ", array[i]);
        }
    }
}