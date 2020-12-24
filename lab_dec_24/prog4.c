//4.Count chars, blank spcaes, tabs and newlines in a file
#include <stdio.h>
int main()
{
   FILE *fp;
   char ch;
   int noc = 0, nob = 0, not = 0, non = 1;
   fp = fopen("sample.txt", "r");

   while ((ch = fgetc(fp)) != EOF)
   {
      noc++;
      if (ch == ' ')
         nob++;
      if (ch == '\t')
         not ++;
      if (ch == '\n')
         non++;
   };

   fclose(fp);

   printf("No. of characters= %d\n", noc);
   printf("No. of blank spaces= %d\n", nob);
   printf("No. of tabs= %d\n", not);
   printf("No. of lines= %d", noc);

   return 0;
}
