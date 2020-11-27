//8. Displays a 4X5 matrix
#include <stdio.h>
int main()
{
    int i, j, mx[4][5];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter data: ");
            scanf("%d", &mx[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            printf(" %d \t", mx[i][j]);
        printf("\n");
    }
    return 0;
}
