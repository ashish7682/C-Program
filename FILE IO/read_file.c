#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("NewTest.txt", "r");
    if (fptr == NULL)
    {
        printf("file does not exit.");
    }
    else
    {
        fclose(fptr);
    }
    return 0;
}