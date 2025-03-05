#include <stdio.h>

int main()
{
    FILE *fp;
    char c;

    fp = fopen(__FILE__, "r");
    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }
    fclose(fp);

    return 0;
}