//5. Printing elements of a 2-D array, Method 1
#include <stdio.h>
int main()
{
    int std[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("%d\t", std[0][0]);
    printf("%d\t", std[0][1]);
    printf("%d\n", std[0][2]);
    printf("%d\t", std[1][0]);
    printf("%d\t", std[1][1]);
    printf("%d\n", std[1][2]);
    printf("%d\t", std[2][0]);
    printf("%d\t", std[2][1]);
    printf("%d\n", std[2][2]);

    return 0;
}
