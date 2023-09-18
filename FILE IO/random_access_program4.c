#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    if (!fptr)
    {
        printf("error:Not open the file");
        return 0;
    }
    printf("position of the pointer:%ld\n", ftell(fptr));
    char ch;
    while (fread(&ch, sizeof(ch), 1, fptr) == 1)
    {
        printf("%c", ch);
    }
    printf("position of the pointer:%ld\n", ftell(fptr));
    rewind(fptr);
    printf("position of the pointer:%ld\n", ftell(fptr));
    return 0;
    fclose(fptr);
}