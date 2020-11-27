//7. Printing elements of a 2-D array, Method 3
#include <stdio.h>
int main()
{
    int std[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", std[i][j]);
        printf("\n");
    }

    return 0;
}
