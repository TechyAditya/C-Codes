//6. Printing elements of a 2-D array, Method 2
#include <stdio.h>
int main()
{
    int std[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; ++i)
    {
        printf("%d\t", std[i][0]);
        printf("%d\t", std[i][1]);
        printf("%d\n", std[i][2]);
    }
    return 0;
}
