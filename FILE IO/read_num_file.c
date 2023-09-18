#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Text2.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);
    printf("Number=%d\n", num);

    fscanf(fptr, "%d", &num);
    printf("Number=%d\n", num);

    fscanf(fptr, "%d", &num);
    printf("Number=%d\n", num);
    fclose(fptr);
    return 0;
}