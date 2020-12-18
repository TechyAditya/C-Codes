//5.Linked list
/*
0. Struct defintion
1. Create a node using malloc function
2. Node stores 2 value (int data and pointer initialised to null)
3. 1st node attaches to head (added to head)
4. Every subsequent node is added to list (added to end)
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *t, *p;

int display()
{
    if (p == NULL)
    {
        printf("\nList is empty");
        return 0;
    }

    p = head;
    while (p != NULL)
    {
        printf("%d---> ", p->data);
        p = p->next;
    }
    printf("NULL");
}

int main()
{
    int a;
    t = (struct node *)malloc(sizeof(struct node)); // First node
    printf("Enter 1st data: ");
    scanf("%d", &t->data);
    t->next = NULL;
    head = t;

    do // Node addition
    {
        t = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter next data: ");
        scanf("%d", &t->data);
        t->next = NULL;
        p = head;
        while (p->next)
            p = p->next;

        p->next = t;

        printf("\nDo you wnat to add more nodes? Press 1 for YES, Press 0 for NO\n");
        scanf("%d", &a);
    } while (a);

    display();
    
    return 0;
}