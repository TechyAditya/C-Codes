#include <stdio.h>

struct time_struct
{
    int hour, minute, second;
};

void input(struct time_struct *t)
{
    printf("\n Enter time in the format HH:MM:SS -> \n");
    scanf("%d %d %d", &t->hour, &t->minute, &t->second);
}
void output(struct time_struct *t)
{
    printf("%d %d %d", t->hour, t->minute, t->second);
}
int main()
{
    struct time_struct time;
    input(&time);
    output(&time);

    return 0;
}