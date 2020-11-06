#include <stdio.h>
int main()
{
    int sum = 0, n, count = 0, i;
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter next number:");
        scanf("%d", &n);
        if (n % 2 == 1)
        {
            count++;
            sum += n;
        }
    }
    printf("Number of odd numbers = %d and sum = %d", count, sum);
    return 0;
}
