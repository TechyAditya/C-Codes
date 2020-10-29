#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (c + a > b))
        printf("The sides you entered are sides of triangle");
    else
        printf("The sides you entered are not sides of triange");

    return 0;
} 