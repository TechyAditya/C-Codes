#include <stdio.h>
int main()
{
    long int n, rev_n = 0, org_n;
    printf("Enter the number:");
    scanf("%ld", &n);
    org_n = n;
    do
    {
        rev_n = rev_n * 10 + n % 10;
        n = n / 10;
    } while (n != 0);
    printf("The reverse number is %ld, ", rev_n);
    if (org_n == rev_n)
        printf("given number is palindrome");
    else
        printf("given number is not palindrome");
}
