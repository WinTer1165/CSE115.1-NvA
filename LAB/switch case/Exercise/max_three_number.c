#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &x, &y, &z);

    switch (x > y && x > z)
    {
    case 1:
        printf("%d is max", x);
        break;
    case 0:
        switch (y > z && y > x)
        {
        case 1:
            printf("%d is max", y);
            break;
        case 0:
            printf("%d is max", z);
            break;
        }
        break;
    }
}