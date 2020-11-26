//4. Prints average marks and number of students with 'O' grade
#include <stdio.h>
int main()
{
    int marks[20], o = 0, avg = 0, sum = 0;
    for (int i = 0; i <= 19; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
        sum += marks[i];
        o += (marks[i] > 89);
        avg = sum / 20;
    }
    printf("\n Average score: %d", avg);
    printf("\n Number of students with 'O' grade: %d", o);
    return 0;
}
