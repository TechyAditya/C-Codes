#include <stdio.h>
int main()
{
    int po;

    printf("Press 1, if the object is at infinity\n");
    printf("Press 2, if the object is beyond center of curvature\n");
    printf("Press 3, if the object is at center of curvature\n");
    printf("Press 4, if the object is between C and F\n");
    printf("Press 5, if the object is at focus F\n");
    printf("command>>");
    scanf("%d", &po);

    if (po == 1)
        printf("Position: At the focus F\nSize: Highly diminished\nNature: Real and Inverted");
    else if (po == 2)
        printf("Position: Between F and C\nSize: Diminished\nNature: Real and Inverted");
    else if (po == 3)
        printf("Position: At C\nSize: Same size\nNature: Real and Inverted");
    else if (po == 4)
        printf("Position: Beyond C\nSize: Enlarged\nNature: Real and Inverted");
    else if (po == 5)
        printf("Position: At infinity\nSize: Highly enlarged\nNature: Real and Inverted");
    else
        printf("Please select correct option...");

    return 0;
}