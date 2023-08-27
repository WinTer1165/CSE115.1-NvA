#include <stdio.h>

double cube(double num);

int main()
{
    int num;
    double cube_cube;

    printf("Enter any number: ");
    scanf("%d", &num);

    cube_cube = cube(num);

    printf("Cube of %d is %.2f", num, cube_cube);

    return 0;
}

double cube(double num)
{
    return (num * num * num);
}
