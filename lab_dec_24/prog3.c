//3.Display contents of a file on screen
#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE *fp;
   char ch;
   fp = fopen("data.out", "r");

   while ((ch = fgetc(fp)) != EOF)
      printf("%c", ch);
   fclose(fp);
   return 0;
}
