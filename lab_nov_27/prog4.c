//4. Dynamic allocation of data in a 2-D array, Method 3
#include <stdio.h>
int main()
{
    int std[4][3];

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter data: ");
            scanf("%d", &std[i][j]);
        }
    }
    return 0;
}
