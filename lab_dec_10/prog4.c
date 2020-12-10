//4.Concatenation of two strings
#include <stdio.h>
#include <string.h>
int length(char *s)
{
    int k = -1;
    while (s[++k])
        ;
    return k;
}

int main()
{
    char s1[100], s2[100], s[200], ch;
    int i, j;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    for (i = 0; i < length(s1); i++)
        s[i] = s1[i];
    s[i] = ' '; //adding space between strings
    for (j = 0; j <= length(s2); j++)
        s[i + j + 1] = s2[j];

    printf("Concatenated string: %s", s);
    return 0;
}
