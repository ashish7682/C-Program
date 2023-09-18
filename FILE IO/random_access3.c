#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    if (!fptr)
    {
        printf("Error:File cannot be opened\n");
        return 0;
    }
    printf("position pointer in the beginning:%ld\n", ftell(fptr));
    char ch;
    while (fread(&ch, sizeof(ch), 1, fptr) == 1)
    {
        printf("%c", ch);
    }
    printf("\nsize of file in bytes is:%ld\n", ftell(fptr));
    fclose(fptr);
    return 0;
}