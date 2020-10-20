#include <stdio.h>
int main()
{
    float a, b, c;
    int test;
    printf("Enter sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    test = (a * a == b * b + c * c) || (b *b == a * a + c * c) || (c *c == a * a + b * b);
    printf("If output is 1, then it's right-angled triangle. Output: %d", test);
    return 0;
}