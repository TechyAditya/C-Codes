//wap to pass an array to a function and print array values at the function definition.
#include <stdio.h>
void display(int *arr, int n)
{
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int n;
    printf("Enter number of elements of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    display(arr, n);
    return 0;
}