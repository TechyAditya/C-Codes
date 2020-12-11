//2.Add elememts present in every row of a matrix and store it in an array using pointers
#include <stdio.h>
int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[6] = {0, 0, 0, 0, 0, 0};
    int(*pa)[3], *pb;
    int i, j;
    pa = a;
    pb = b;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            pb[i] += pa[i][j];
    }
    for (i = 0; i < 2; i++)
        printf("%d\n", pb[i]);
    return 0;
}
