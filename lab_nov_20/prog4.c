#include <stdio.h>
int fibonacci(int n)
{
    return (n == 1 || n == 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    printf("nth number of fibonacci series is %d", fibonacci(a));
    return 0;
}
