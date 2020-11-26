//5. Searches if an item is in the array, if present, it prints its position
#include <stdio.h>
int main()
{
   int i, item, m[5], p = -1;
   for (i = 0; i < 5; i++)
   {
      printf("\nEnter data: ");
      scanf("%d", &m[i]);
   }
   printf("\nEnter item to be searched: ");
   scanf("%d", &item);
   for (i = 0; i < 5; i++)
   {
      if (item == m[i])
      {
         p = i;
         break;
      }
   }
   if (p == -1)
      printf("\nItem is not present");
   else
      printf("\nItem is at index %d and position %d", p, p+1);
   return 0;
}
