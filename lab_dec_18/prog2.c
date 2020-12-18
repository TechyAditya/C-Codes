//2.Structures within structures
#include <stdio.h>
struct address
{
    char phone[15];
    char city[25];
    int pin;
};

struct emp
{
    char name[25];
    struct address adr;
} e;

int main()
{
    struct emp e = {"Name", "999", "Delhi", 201301};
    printf("%s", e.adr.city);
    return 0;
}