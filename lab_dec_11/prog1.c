//1.Accessing 2-D array elements and finding frequency of a character in names using array of pointer variable
#include <stdio.h>
int main()
{
    char a[] = {"Saurav"}, b[] = {"Rajat"}, c[] = {"Suraj"};
    char *p[3]; // Bracket has higher precedence than * and number of rows is fixed
    int i, j, count = 0;
    p[0] = a;
    p[1] = b;
    p[2] = c;

    for (i = 0; i < 3; i++)
        printf("%s \n", p[i]);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; p[i][j]; j++)
            count += p[i][j] == 'a';
    }

    printf("\nFrequency of 'a' in the names: %d \n", count);
    return 0;
}
