#include <stdio.h>
#define g 9.8

int main()
{
    float u, v, s;
    int t;

    printf("Enter initial velocity:");
    scanf("%f", &u);

    t = 1;
    v = u + g * t;
    s = u * t + g * t * t / 2;
    printf("\nVelocity = %f m/s and Distance covered = %f m after %d s", v, s, t);

    t++;
    v = u + g * t;
    s = u * t + g * t * t / 2;
    printf("\nVelocity = %f m/s and Distance covered = %f m after %d s", v, s, t);

    t++;
    v = u + g * t;
    s = u * t + g * t * t / 2;
    printf("\nVelocity = %f m/s and Distance covered = %f m after %d s", v, s, t);

    t++;
    v = u + g * t;
    s = u * t + g * t * t / 2;
    printf("\nVelocity = %f m/s and Distance covered = %f m after %d s", v, s, t);

    t++;
    v = u + g * t;
    s = u * t + g * t * t / 2;
    printf("\nVelocity = %f m/s and Distance covered = %f m after %d s", v, s, t);
    
    return 0;
}