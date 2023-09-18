#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "w");
    char ch[100];
    fprintf(fptr, "%s", "Mango");
    fclose(fptr);
    return 0;
}