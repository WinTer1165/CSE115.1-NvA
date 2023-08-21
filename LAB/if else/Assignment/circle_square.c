#include <stdio.h>
#include <math.h>

int main()
{
    double radius, side, diagonal;

    printf("Enter radius: ");
    scanf("%lf", &radius);
    printf("Enter side of square: ");
    scanf("%lf", &side);

    diagonal = sqrt(side * side + side * side);

    if (diagonal <= 2 * radius)
    {
        printf("The square can be placed inside the circle.\n");
    }
    else
    {
        printf("The square cannot be placed inside the circle.\n");
    }

    return 0;
}
