
#include <stdio.h>
#include <math.h>

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);

int main()
{
    float radius, diameter, circumference, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    diameter = getDiameter(radius);
    circumference = getCircumference(radius);
    area = getArea(radius);

    printf("Diameter of the circle = %.2f units\n", diameter);
    printf("Circumference of the circle = %.2f units\n", circumference);
    printf("Area of the circle = %.2f sq. units", area);

    return 0;
}

double getDiameter(double radius)
{
    return (2 * radius);
}

double getCircumference(double radius)
{
    return (2 * 3.14 * radius);
}

double getArea(double radius)
{
    return (3.14 * radius * radius);
}