#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    if (!fptr)
    {
        printf("Error:File can not be read.\n");
        return 0;
    }
    fseek(fptr, 12, 0);
    char ch;
    while (fread(&ch, sizeof(ch), 1, fptr) == 1)
    {
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}