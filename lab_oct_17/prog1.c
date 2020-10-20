#include <stdio.h>
int main()
{
    int marks, age;

    printf("Enter marks:");
    scanf("%d", &marks);
    printf("Enter age:");
    scanf("%d", &age);

    marks = marks + 40;

    if (age < 50)
        marks = marks + 20;

    printf("%d", marks);
    return 0;
}