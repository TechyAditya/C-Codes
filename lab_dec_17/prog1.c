//1.Strucutre Example
#include <stdio.h>
struct book
{
    char name[100];
    float price;
    int pages;
} b1, b2;

int main()
{
    printf("\nEnter the NAME, PRICE and No. OF PAGES of the 1st book: \n");
    scanf("%s%f%d", &b1.name, &b1.price, &b1.pages);
    printf("\nEnter the NAME, PRICE and No. OF PAGES of the 2nd book: \n");
    scanf("%s%f%d", &b2.name, &b2.price, &b2.pages);
    
    printf("\nYour enteries: \n");
    printf("\nBook 1: %s, $%.2f, %d", b1.name, b1.price, b1.pages);
    printf("\nBook 2: %s, $%.2f, %d", b2.name, b2.price, b2.pages);
    return 0;
}
