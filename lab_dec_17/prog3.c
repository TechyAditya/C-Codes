//3.Salary question
#include <stdio.h>
struct Employee
{
    char name[100];
    char address[100];
    int age;
    float salary;
};

int main()
{
    int n, i, count = 0;
    float total = 0, avg, highest = 0;
    printf("\nEnter number of employees: ");
    scanf("%d", &n);
    struct Employee E[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter name, address (city), age and salary: \n");
        scanf("%s %s %d %f", &E[i].name, &E[i].address, &E[i].age, &E[i].salary);
    }

    // For Average Salary
    for (i = 0; i < n; i++)
        total += E[i].salary;
    avg = total / n;

    // For number of employees with salary > Rs 5000
    for (i = 0; i < n; i++)
        if (E[i].salary > 5000.00)
            count++;

    // For Highest Salary
    for (i = 0; i < n; i++)
        if (E[i].salary > highest)
            highest = E[i].salary;

    // Final Output
    printf("\nYour enteries: \n");
    for (i = 0; i < n; i++)
        printf("\nEmployee %d: %s, %s, %d, Rs %.2f", i + 1, E[i].name, E[i].address, E[i].age, E[i].salary);
    printf("\n");
    printf("\nAverage Salary: Rs %.2f", avg);
    printf("\nHighest Salary: Rs %.2f", highest);
    printf("\nNumber of employees with salary greater than Rs 5000: %d", count);
    return 0;
}
