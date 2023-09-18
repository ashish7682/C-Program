#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    fclose(fptr);
    return 0;
}