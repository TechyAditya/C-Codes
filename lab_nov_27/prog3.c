//3. Dynamic allocation of data in a 2-D array, Method 2
#include <stdio.h>
int main()
{
    int std[4][3];

    for (int i = 0; i < 4; ++i)
    {
        printf("Enter data: ");
        scanf("%d", &std[i][0]);
        printf("Enter data: ");
        scanf("%d", &std[i][1]);
        printf("Enter data: ");
        scanf("%d", &std[i][2]);
    }
    return 0;
}
