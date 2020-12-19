#include <stdio.h>

struct time_struct
{
    int hour, minute, second;
} t;

int main()
{
    printf("\n Enter time in the format HH:MM:SS -> \n");
    scanf("%d%d%d", &t.hour, &t.minute, &t.second);

    printf("\n Time: %d:%d:%d", t.hour, t.minute, t.second);
    return 0;
}