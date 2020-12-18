//2.Array of structures example
#include <stdio.h>
struct book
{
    char name[100];
    float price;
    int pages;
};

int main()
{
    struct book b[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name,price and pages: \n");
        scanf("%s %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }

    printf("\nYour enteries: \n");
    for (int i = 0; i < 5; i++)
        printf("\nBook %d: %s, $%.2f, %d", i + 1, &b[i].name, &b[i].price, &b[i].pages);
    return 0;
}
