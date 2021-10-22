#include <stdio.h>
#include <stdlib.h>
#define n 5
int main()
{
    int *arr;
    arr = (int *)calloc(n, sizeof(int));
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted elements are: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
