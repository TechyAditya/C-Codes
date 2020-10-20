#include <stdio.h>
int main()
{
    float a, b, c, t, s;
    printf("Enter sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    t = ((a + b) > c) && ((b + c) > a) && ((c + a) > b);
    s = t * (a + b + c);
    
    printf("If sum is 0 then it's not the sides of the triangle");
    printf("\n\nSum of sides of the triangle is %f units only", s);
    return 0;
}