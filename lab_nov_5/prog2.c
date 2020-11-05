#include <stdio.h>

int main()
{
    int score, i = 1, count = 0;
again:
    printf("\nEnter the score of player no %d = ", i);
    scanf("%d", &score);
    if (score < 0)
        goto again;
    if (score >= 100)
        count += score / 100;
    i++;
    if (i <= 10)
        goto again;
    printf("Total no. of players made Century = %d", count);
    return 0;
}
