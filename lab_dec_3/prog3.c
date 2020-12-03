//3.Accessing elements using Pointer variables
#include <stdio.h>
int main()
{
    int a = 1, *p = &a;
    printf("\n%p", p);
    printf("\n%d", *p);
    return 0;
}
