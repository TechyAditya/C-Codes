#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("%d", i + 1);
        for (j = 0; j < n - 1 - i; j++)
            printf(" ");
        for (j = 0; j < n - 1 - i; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("%d", i + 1);
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 2 * n - 2 * i - 1; j >= 1; j--)
            printf("%d", n - i);
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 2 * n - 2 * i - 1; j >= 1; j--)
            printf("%d", n - i);
        printf("\n");
    }
}