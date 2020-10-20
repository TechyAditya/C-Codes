#include<stdio.h>
int main()
{
    float r1, r2, r3, voltage, rs, is, t, rp, ip;
    printf("Enter the value of 3 resistances:");
    scanf("%f%f%f", &r1, &r2, &r3);
    printf("\nEnter potential difference:");
    scanf("%f", &voltage);
    rs = r1 + r2 + r3;
    is = voltage / rs;
    t = 1 / r1 + 1 / r2 + 1 / r3;
    rp = 1 / t;
    ip = voltage / rp;
    printf("\nTotal resistance in series = %f\nCurrent = %f", rs, is);
    printf("\n\nTotal resistance in parallel = %f\nCurrent = %f", rp, ip);
    return 0;
}