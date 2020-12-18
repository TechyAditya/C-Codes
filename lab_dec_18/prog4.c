//4.Passing the address of a structure variable to a function
#include <stdio.h>
struct book
{
    char name[20];
    float price;
    int pages;
};

void display(struct book *p)
{
    printf("Name: %s, Price: $ %.2f, Pages: %d\n", p->name, p->price, p->pages);
}

int main()
{
    struct book b = {"Book 1", 13.49, 111};
    display(&b);
    return 0;
}