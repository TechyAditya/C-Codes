#include <stdio.h>

int fun(char ch)
{
    if (ch >= 65 && ch <= 90)
        return (ch);
    else
        return (ch - 32);
}

int main()
{
    int a;
    a = fun('q');
    printf("%c", a);
    return 0;
}