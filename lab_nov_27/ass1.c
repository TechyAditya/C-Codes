//Assignment 1:Prints number of positive, negative, even and odd numbers
#include <stdio.h>
int main()
{
    int arr[20], even = 0, odd = 0, neg = 0, pos = 0;
    printf("\nEnter 20 numbers: \n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%i", &arr[i]);
        if (arr[i] >= 0)
            pos++;
        else
            neg++;
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("There are: \n");
    printf("%d even numbers \n", even);
    printf("%d odd numbers \n", odd);
    printf("%d negative numbers \n", neg);
    printf("%d positive numbers \n", pos);
}
