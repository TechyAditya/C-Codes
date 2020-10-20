#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4, m1, m2;
    int slope;

    printf("Enter coordinates of 1st point on line 1(x1,y1): \n");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of 2nd point on line 1(x2,y2): \n");
    scanf("%d %d", &x2, &y2);
    printf("Enter coordinates of 1st point on line 2(x1,y1): \n");
    scanf("%d %d", &x3, &y3);
    printf("Enter coordinates of 2nd point on line 2(x2,y2): \n");
    scanf("%d %d", &x4, &y4);

    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y4 - y3) / (x4 - x3);

    slope = ((m1 * m2 * -1) == 1 && (m1 * m2 * -1) == -1);
    printf("If slope is 1 then it's perpendicular. Slope = %d", slope);
    return 0;
}