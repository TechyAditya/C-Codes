// Reverse an array

#include <stdio.h>
int i;

void reverse(int *p)
{
    int b[10];

    for (i = 0; i < 10; i++)
    {
        b[i] = *(p + i);
    }

    for (i = 0; i <= 10; i++)
    {
        *(p + i) = b[10 - (i + 1)];
    }
}

void display(int *p)
{
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
}

int main()
{
    int array[10];

    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n");
    printf("\n Original: \n");
    display(&array[0]);

    reverse(&array[0]);
    printf("\n Reversed: \n");

    display(&array[0]);

    return 0;
}