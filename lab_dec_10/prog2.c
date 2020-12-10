//2.Find length of string
#include <stdio.h>
int main()
{
    char str[100];
    int i = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[++i])
        ;
    printf("\n Length of string: %d", i);
    return 0;
}
