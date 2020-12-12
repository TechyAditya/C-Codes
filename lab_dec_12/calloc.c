// Find the largest element nd store it in the 0th position
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, n;
    float *p;
    printf("Enter total number of elements (1-100): ");
    scanf("%d", &n);

    p = (float *)calloc(n, sizeof(float));
    for (i = 0; i < n; i++)
    {
        printf("\n Enter number %d: ", i + 1);
        scanf("%f", p + i);
    }
    for (i = 1; i < n; i++)
    {
        if (*p < *(p + i))
            *p = *(p + i);
    }
    printf("\n Largest element = %.2f", *p);
    free(p);
    return 0;
}
