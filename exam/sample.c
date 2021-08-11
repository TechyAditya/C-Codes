#include <stdio.h>
int main()
{
    int arr[5] = {5, 15, 25, 35, 45};
    int *ptr = arr + 1;
    ++ptr;
    ++*ptr;
    printf("%d %d %d", ++*ptr, *ptr++, *++ptr);
    return 0;
}