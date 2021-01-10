/*3. Declare a structure in the name people with the following data members:
Name
Age
Sex. 
Take an array of size 10 of type people. Write a programme to assign values to all data members of the array and write a function to display  it in the following format if age of the person is greater than p, where p = Your Roll No % 10 + 10:

Sl No. Name Age Sex DOB
*/
#include <stdio.h>
struct people
{
    char name[10];
    int age;
    char sex;
    char dob[10];
} x[10];
void printdata()
{
    printf("Sl No   name    age    dob\n");
    for (int i = 0; i <= 9; i++)
    {
        if (x[i].sex == 'f' || x[i].sex == 'F')
        {
            printf("%d  %s  %d  %s\n", (i + 1), x[i].name, x[i].age, x[i].dob);
        }
    }
}
int main()
{

    for (int i = 0; i <= 9; i++)
    {
        printf("Enter name,age,sex and dob\n");
        scanf("%s %d %c %s", x[i].name, &x[i].age, &x[i].sex, x[i].dob);
    }
    printdata();
    return 0;
}