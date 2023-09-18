#include <stdio.h>
int main()
{
    FILE *fptr;
    char ch[500];
    fptr = fopen("file.txt", "r");
    while (fscanf(fptr, "%s", ch) != EOF)
    {
        printf("%s\n", ch);
    }
    rewind(fptr);
    while (fscanf(fptr, "%s", ch) != EOF)
    {
        printf("%s\n", ch);
    }
    return 0;
}