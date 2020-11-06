#include <stdio.h>
#include <math.h>
#define pi 3.14
#define g 9.8
int main()
{
    int l;
    float t;
    printf("Length \t\t Time Period");
    for (l = 0; l <= 50; l += 10)
    {
        t = 2.0 * pi * sqrt(l / g);
        printf("\n%d\t\t%f", l, t);
    }
}
