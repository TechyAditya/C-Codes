#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 2 * n - 2 * i - 1; j >= 1; j--)
            printf("A");
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 2 * n - 2 * i - 1; j >= 1; j--)
            printf("A");
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 2 * n - 2 * i - 1; j >= 1; j--)
            printf("A");
        printf("\n");
    }
}
