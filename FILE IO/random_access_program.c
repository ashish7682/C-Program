#include <stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    long int n;
    fptr = fopen("file.txt", "wb+");
    fputs("This is random access file example", fptr);
    n = ftell(fptr);
    printf("current position of file pointer after writing:%d\n", n);
    fseek(fptr, 7, SEEK_SET);
    fputs("C programming", fptr);
    printf("Current position of file pointer after fseek:%d\n", ftell(fptr));
    rewind(fptr);
    printf("Current position of file pointer after rewind:%d\n", ftell(fptr));
    while ((ch == fgetc(fptr)) != EOF)
    {
        printf("%ch", ch);
    }
    fclose(fptr);
    return 0;
}