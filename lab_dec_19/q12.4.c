// Addition of 2 matrices

#include <stdio.h>
#define R 3
#define C 3
int i, j;

void add(int mx1[][C], int mx2[][C], int res[][C])
{
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            *(*(res + i) + j) = *(*(mx1 + i) + j) + *(*(mx2 + i) + j);
        }
    }
}

void print(int res[][C])
{
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d ", *(*(res + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int mx1[R][C], mx2[R][C], res[R][C];

    printf("\n Enter Data for the 1st matrix: \n"); // Data entry for first matrix starts

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            scanf("%d", (*(mx1 + i) + j));
        }
    }

    printf("\n Enter Data for the 2nd matrix: \n"); // Data entry for second matrix starts

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            scanf("%d", (*(mx2 + i) + j));
        }
    }

    add(mx1, mx2, res);
    printf("\n Sum of matrices: \n");
    print(res);

    return 0;
}