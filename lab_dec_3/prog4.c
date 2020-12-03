//4.Accessing elements in an array using Pointer variables
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, *p = arr; // &arr is address of whole array
    printf("\n%p", p);
    printf("\n%d", *p);
    printf("\n%d", *(p + 2));
    // arr[3] is same as *p[3] as arr can be replaced with p
    return 0;
}
