#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("sale.txt", "r");
    char ch;
    if (ferror(fptr))
    {
        printf("Error");
    }
    else
    {
        while (!feof(fptr))
        {
            ch = fgetc(fptr);
            putchar(ch);
        }
    }
    return 0;
}