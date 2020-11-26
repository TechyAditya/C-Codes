//3. 3rd method of printing elements of an array
#include <stdio.h>
int main()
{
    int n;
    char al[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    for (int i = 0; i < 10; i++)
        printf("\n %c", al[i]);
    return 0;
}
