//3.Frequency of characters in string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch, i = 0, count = 0;
    printf("\nEnter string: ");
    gets(str);
    printf("\nWhich characters frequency do you want to find? : ");
    scanf("%c", &ch);
    while (str[i])
    {
        if (ch == str[i++])
            ++count;
    }

    while (str[i])
        count += ch == str[i++];
    while (count += ch == str[i], str[i++])
        ;

    printf("\nFrequency of %c = %d", ch, count);
    return 0;
}
