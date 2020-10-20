#include <stdio.h>
int main()
{
    float a, b, c;
    int t;

    printf("Enter sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    t = ((a + b) > c) && ((b + c) > a) && ((c + a) > b);
    
    printf("If number is 0 then it's not a triangle. If it's 1, then it's a triangle. Number: %d", t);
    return 0;
}