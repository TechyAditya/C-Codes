#include <stdio.h>
int gcd(int n1, int n2)
{
    if (n1 % n2 == 0)
        return n2;
    else
        return (gcd(n2, n1 % n2));
}

int main()
{
    int g, a, b;
    printf("Enter any two positive integers: ");
    scanf("%d %d", &a, &b);
    g = (a > b ? gcd(a, b) : gcd(b, a));
    printf("GCD of %d and %d is %d", a, b, g);
    return 0;
}
