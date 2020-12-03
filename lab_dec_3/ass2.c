//6.Take array of size 20, find out the largest number present in b/w the position 5-15
#include <stdio.h>
int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int *p = arr;
    int i, largest = 0, next;
    for (i = 1; i < 11; i++)
    {
        next = *(p + 4 + i);
        if (next > largest)
            largest = next;
    }
    printf("%d", largest);
    return 0;
}
