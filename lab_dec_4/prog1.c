//1.Sum of elements of array using pointer variables
#include <stdio.h>
int main()
{
    int i, sum = 0, arr[5] = {1, 2, 3, 4, 5}, *p = arr + 4;
    for (i = 0; i < 5; i++)
        sum += *(p - i);
    printf("%d", sum);
    return 0;
}
