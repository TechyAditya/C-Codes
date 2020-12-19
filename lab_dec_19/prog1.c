// 1.Linked list
// Qs1. Define a function which will return the node holding the largest value in the linked list
// Qs2. Add data to front of linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *t, *p;

void display(struct node *p)
{
    if (p == NULL)
    {
        printf("\n List is empty");
    }

    p = head;
    printf("List: ");
    while (p != NULL)
    {
        printf("%d ---> ", p->data);
        p = p->next;
    }
    printf("NULL");
}

int largest(struct node *p)
{
    struct node *new = head;
    int max;

    max = head->data;

    while (new != NULL)
    {
        if (max < new->data)
        {
            max = new->data;
        }
        new = new->next;
    }
    return max;
}

int main()
{
    int a;
    t = (struct node *)malloc(sizeof(struct node)); // First node
    printf("\n Enter 1st data: ");
    scanf("%d", &t->data);
    t->next = NULL;
    head = t;

    do // Node addition
    {
        t = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter next data: ");
        scanf("%d", &t->data);
        t->next = NULL;
        p = head;
        while (p->next)
            p = p->next;

        p->next = t;

        printf("\n Do you wnat to add more nodes? Press 1 for YES, Press 0 for NO\n");
        scanf("%d", &a);
    } while (a);

    display(head);

    largest(head);

    return 0;
}
