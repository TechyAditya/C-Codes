#include <stdio.h>
int main()
{
    int n;
    printf("Enter number between 1-3 or any other number:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("1st case statement");
        break;
    case 2:
        printf("2nd case statement");
        break;
    case 3:
        printf("3rd case statement");
        break;
    default:
        printf("Default case statement");
    }
}