#include <stdio.h>

int find_max(int n)
{
    int next_num, largest = 0, i;
    for (i = 0; i < n; i++)
    {
        printf("Enter next number: ");
        scanf("%d", &next_num);
        if (next_num > largest)
            largest = next_num;
    }
    return (largest);
}

int count_leader(int n)
{
    int next_num, largest = 0, i, count = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter next number: ");
        scanf("%d", &next_num);
        if (next_num > largest)
        {
            largest = next_num;
            count++;
        }
    }
    return (count);
}

int main()
{
    int a;
    a = find_max(10);
    printf("\nMax is %d\n\n", a);
    printf("\nMax is %d\n\n",find_max(5));

    a=count_leader(8);
    printf("\nNo. of Leaders are %d\n\n",a);
    printf("\nNo. of Leaders are %d\n\n",count_leader(10));
}