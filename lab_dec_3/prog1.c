//1.Pointer behaviour in 1-D array
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = a;
    printf("\n%p", &a); // %p is used to print the address of a pointer
    printf("\n%d", &a); // &a is address of whole array i.e., address of group of elements (10 element group)
    printf("\n%d", *&a);
    printf("\n%d", *a);
    printf("\n%d", *(a + 1));
    printf("\n%d", *(a + 9));
    return 0;
}
