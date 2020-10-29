#include <stdio.h>
int main()
{
    int a;

    printf("Enter the value of acceleratoin: ");
    scanf("%d", &a);

    if (a == 0)
        printf("\nThe vehicle moves with constant velocity");
    else if (a > 0)
        printf("\nThe vehicle is accelerating");
    else
        printf("\nThe vehicle is deccelerating");
    return 0;
}