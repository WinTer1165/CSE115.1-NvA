#include <stdio.h>

int main()
{
    // Array is a data structure. It is a collection of same type data values in memory.

    // [Data structure is a format for organizing and storing data]

    // int a[6] = {1,2,3,4,5,6}
    // char ch[5]= {abcde} or {'a', 'b', 'c', 'd', 'e'}
    // Each array's size is 4 bytes
    // 1D array:
    // int a[3] = {1, 2, 3}
    //  compiler will give a memory of 5 * sizeof(int)

    // best practice is using macro-- #define SIZE 5

    // index starts from 0,
    // 1, 2.....

    /*
        int a[5] = {1, 2, 3, 4, 5};
        printf("%d\n", sizeof(a));                // getting total array size
        printf("%d\n", sizeof(a) / sizeof(a[0])); // how many elements
        printf("%d\n", sizeof(a) / 5);            // getting each element size
        printf("%d\n", sizeof(a[0]) * 5);         // getting total array size
    */

    // 2D array:
    //  int a[2][3] = {{1, 2, 3}, {4, 5, 6}}
    //  int a[row][column] = {{1, 2, 3}, {4, 5, 6}}
    // int array_2D[2][3] = {{0}, {4, 5, 6}};
    // int a[2][3]={1,2,3,4,5,6};
    // printf("%d", array_2D[0][2]);

    // 3D array:
    // int a[2][3][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10,11,12}},
    //                   {{13, 14, 15, 16}, {17, 18, 19, 20}, {21,22,23,24}}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         for (int k = 0; k < 4; k++)
    //         {
    //             printf("%d ", a[i][j][k]);
    //         }
    //             }
    // }
}