//5.A file-copy program
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("sample.txt", "r");
    if (fs == NULL)
    {
        puts("Cannot open source file");
        return 0;
    }
    ft = fopen("copy.txt", "w");
    if (ft == NULL)
    {
        puts("Cannot open target file");
        fclose(fs);
        return 0;
    }
    while ((ch = fgetc(fs)) != EOF)
        fputc(ch, ft);
    fclose(fs);
    fclose(ft);
    return 0;
}
