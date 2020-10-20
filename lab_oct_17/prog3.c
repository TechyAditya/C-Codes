#include <stdio.h>
int main()
{
    float P, Q, R, S;
    printf("Enter values of P, Q, R, S: ");
    scanf("%f %f %f %f", &P, &Q, &R, &S);

    if (P * S == R * Q)
    {
        printf("\nThe wheatstone bridge is balanced");
        return 0;
    }
    printf("\nThe wheatstone bridge is NOT balanced");
    S = R * Q / P;
    printf("\nChoose S=%f to balance the bridge. ", S);
    return 0;
}