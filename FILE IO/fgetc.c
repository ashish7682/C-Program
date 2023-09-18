#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    char ch[100];
    printf("%c\n", fgetc(fptr));
    fclose(fptr);
    return 0;
}