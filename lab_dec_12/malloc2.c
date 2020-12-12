// Allocate & assign dynamically a 2D array([n][col]) to a pointer and find sum of all elements
#include <stdio.h>
#include <stdlib.h>
#define col 5 // Column size 'col' is fixed
int main()
{
    int n, i, j, sum = 0;
    int(*a)[col]; // Pointer to a row with 5 elements
    printf("Enter number of rows: ");
    scanf("%d", &n);
    a = (int(*)[col])malloc(n * col * sizeof(int));
    printf("\n Enter elements of array: ");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < col; j++)
            sum += *(*(a + i) + j);
    }
    printf("\n Sum of elemets of array: %d", sum);
    return 0;
}