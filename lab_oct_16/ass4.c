#include<stdio.h>
#include<math.h>
#define pi 3.141
#define g 9.8

int main()
{
    float t;
    int l = 0;

    l += 10;
    t = 2 * pi * sqrt(l / g);
    printf("\nFor length = %d, the time period of oscillation is %f seconds", l, t);

    l += 10;
    t = 2 * pi * sqrt(l / g);
    printf("\nFor length = %d, the time period of oscillation is %f seconds", l, t);

    l += 10;
    t = 2 * pi * sqrt(l / g);
    printf("\nFor length = %d, the time period of oscillation is %f seconds", l, t);

    l += 10;
    t = 2 * pi * sqrt(l / g);
    printf("\nFor length = %d, the time period of oscillation is %f seconds", l, t);

    l += 10;
    t = 2 * pi * sqrt(l / g);
    printf("\nFor length = %d, the time period of oscillation is %f seconds", l, t);

    return 0;
}