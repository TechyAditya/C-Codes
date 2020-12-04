//2.Swap 2 integers using pointer variables and function (Call by reference)
#include <stdio.h>
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("\n x = %d, y = %d", *x, *y);
}
int main()
{
    int a = 1, b = 2;
    swap(&a, &b);
    printf("\n Swapped values: \n");
    printf("\n a = %d, b = %d", a, b);
    return 0;
}
