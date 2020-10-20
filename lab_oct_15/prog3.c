#include<stdio.h>
int main()
{
    int pt, st, pv, sv;
    printf("Enter the primary voltage:");
    scanf("%d", &pv);
    printf("Enter the number of primary turns:");
    scanf("%d", &pt);
    printf("Enter number of secondary turns:");
    scanf("%d", &st);
    sv = (pv * st) / pt;
    printf("\nSecondary voltage is %d volts", sv);
    return 0;
}