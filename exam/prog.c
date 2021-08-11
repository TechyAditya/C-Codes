#include <stdio.h>
struct Number
{
    float n;
    float i;
};
struct Number sum(struct Number x, struct Number y)
{
    struct Number total;
    total.n = x.n + y.n;
    total.i = x.i + y.i;
    return total;
}
int main()
{
    struct Number a, b, total;
    printf("Enter 1st number in form of a + bi:\n");
    printf("a=");
    scanf("%f", &a.n);
    printf("b=");
    scanf("%f", &a.i);
    printf("Enter 2nd number in form of a + bi:\n");
    printf("a=");
    scanf("%f", &b.n);
    printf("b=");
    scanf("%f", &b.i);
    total = sum(a, b);
    printf("The sum of %f + %fi and %f + %fi is equal to %f + %fi", a.n, a.i, b.n, b.i, total.n, total.i);
    return 0;
}
