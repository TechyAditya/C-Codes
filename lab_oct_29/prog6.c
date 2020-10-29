#include <stdio.h>
int main()
{
    int p, c, m, e, b, per;
    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &p, &c, &m, &b, &e);
    per = (p + c + m + e + b) / 5;

    if (per >= 60)
        printf("First division");
    else if (per >= 50)
        printf("Second division");
    else if (per >= 40)
        printf("Third division");
    else
        printf("Fail");

    return 0;
}