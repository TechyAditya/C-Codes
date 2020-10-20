#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, m;
    printf("Enter the one point x1 and y1:");
    scanf("%f %f", &x1, &y1);
    printf("\nEnter the another point x2 and y2:");
    scanf("%f %f", &x2, &y2);
    m = (y2 - y1) / (x2 - x1);
    printf("\nThe slope of the line is %f", m);
    return 0;
}