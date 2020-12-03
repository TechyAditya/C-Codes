//2.Pointer behaviour in 2-D array
#include <stdio.h>
int main()
{
    int b[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    int *p = b;
    printf("\n%p", &b);  // Address of 5X2 group element
    printf("\n%d", *&b); // Address of first row
    printf("\n%d", *b);  // Address of first element
    printf("\n%d", **b);
    printf("\n%d", *(*b + 1));
    printf("\n%d", *(*b + 9));
    printf("\n%d", **(b + 1));
    return 0;
}
