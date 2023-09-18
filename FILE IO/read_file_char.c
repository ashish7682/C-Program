#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    char ch[100];
    fscanf(fptr, "%s", &ch);
    printf("character=%s", ch);
    fclose(fptr);
    return 0;
}