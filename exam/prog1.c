/*1. Write a function to return the ith se_fibonacci number. 
Call this function from main( ) to print mth to nth se_fibonacci numbers, 
where value of m = Your Roll No % 10 + 1 and n = Your Roll No % 10 + 10.*/
#include <stdio.h>
#include <stdlib.h>
#define se_roll 222
int se_fibonacci(int se_n)
{
    if (se_n <= 1)
        return se_n;
    return se_fibonacci(se_n - 1) + se_fibonacci(se_n - 2);
}
int main()
{
    int se_m = se_roll % 10 + 1;
    int se_n = se_roll % 10 + 10;
    while (se_m != se_n)
    {
        printf("%d\n", se_fibonacci(se_m));
        se_m++;
    }
    return 0;
}