/*
Declare a structure in the name people with the following data members:
Name
Age
Sex.
Date of Birth
Take an array of size 10 of type people. Write a programme to assign values
to all data members of the array and write a function to display it in the
following format for all Female:
Sl No. Name Age DOB
*/

#include <stdio.h>

int i, date, month, year;

struct PEOPLE
{
    char name[20];
    int age;
    char sex;
    int dob;
} p1[10];

void female()
{
    printf("List of females:\nSl no.\tName\tAge\tDOB\n");
    for (i = 0; i < 10; i++)
    {
        if (p1[i].sex == 'F' || p1[i].sex == 'f')
        {
            date = p1[i].dob / 1000;
            month = p1[i].dob % 100;
            printf("%d\t%s\t%d\t%d-%d-%d\n", i + 1, p1[i].name, p1[i].age, date, month, year - p1[i].age);
        }
    }
}

int main()
{
    printf("Enter current year:");
    scanf("%d",&year);
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter details for person %d\n", i + 1);
        printf("\nEnter name: ");
        scanf("%s", &p1[i].name);

        printf("Enter age: ");
        scanf("%d", &p1[i].age);

        printf("Enter gender(M/F/O): ");
        scanf("%s", &p1[i].sex);

        printf("Enter birthday in format DDMM: ");
        scanf("%d", &p1[i].dob);
    }
    female();
    return 0;
}