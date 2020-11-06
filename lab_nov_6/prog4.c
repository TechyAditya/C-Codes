#include <stdio.h>
int main()
{
    int num, i, flag = 1;
    printf("Enter number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
        if (num % i == 0)
        {
            flag = 0;
            break;
        }

    if (num == 1)
        printf("\n1 is neither prime nor composite");
    else if (flag == 0)
        printf("\n%d is not a prime number", num);
    else
        printf("\n%d is a prime number", num);

    return 0;
}
