//Assignment 2:Multiplies a scalar (constant) with a 3X4 matrix
#include <stdio.h>
int main()
{
    int scal;
    int mx[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    printf("\nCurrent Matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d\t", mx[i][j]);
        printf("\n");
    }
    printf("\nEnter scalar to multiply matrix with: ");
    scanf("%d", &scal);

    // Processing
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            mx[i][j] *= scal;

    printf("\nUpdated Matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d\t", mx[i][j]);
        printf("\n");
    }
    
    return 0;
}
