/*3. Declare a structure in the name people with the following data members:
Name
Age
Sex. 
Take an array of size 10 of type people. Write a programme to assign values to all data members of the array and 
write a function to display  it in the following format if age of the person is greater than p, where p = Your Roll No % 10 + 10:

Sl No. Name Age Sex DOB
*/
#include <stdio.h>
int i, se_date, se_month, se_year;
int se_p = 222 % 10 + 10;
struct se_PEOPLE
{
    char se_name[20];
    int se_age;
    char se_sex;
    int se_dob;
} se_p1[10];

void printdata()
{
    printf("\nSl no.\tName\tAge\tDOB\n");
    for (i = 0; i < 10; i++)
    {
        if (se_p1[i].se_age > se_p)
        {
            se_date = se_p1[i].se_dob / 100;
            se_month = se_p1[i].se_dob % 100;
            printf("%d\t%s\t%d\t%d-%d-%d\n", i + 1, se_p1[i].se_name, se_p1[i].se_age, se_date, se_month, se_year - se_p1[i].se_age);
        }
    }
}

int main()
{
    printf("Enter current year:");
    scanf("%d",&se_year);
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter details for person %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", &se_p1[i].se_name);

        printf("Enter age: ");
        scanf("%d", &se_p1[i].se_age);

        printf("Enter gender(M/F/O): ");
        scanf("%s", &se_p1[i].se_sex);

        printf("Enter birthday in format DDMM: ");
        scanf("%d", &se_p1[i].se_dob);
    }
    printdata();
    return 0;
}
