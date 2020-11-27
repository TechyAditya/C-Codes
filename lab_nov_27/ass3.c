//Assignment 3:Add two matrices of size 4X4
#include <stdio.h>
int main()
{
    int i, j;
    int arr1[4][4], arr2[4][4], arr3[4][4];

    printf("Enter elements of first matrix: \n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &arr1[i][j]);

    printf("Enter elements of second matrix: \n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &arr2[i][j]);

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            arr3[i][j] = arr1[i][j] + arr2[i][j];

    printf("New array: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d  ", arr3[i][j]);
        printf("\n");
    }
}
