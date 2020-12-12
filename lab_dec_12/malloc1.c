// Allocate n elements dynamically to a pointer variable and find sum of all elements using pointer variable
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *p, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("\n Enter elements of array: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
        sum += *(p + i);
    }
    printf("\n Sum of elemets of array: %d", sum);
    return 0;
}
