#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    int marks, i, n;
    printf("Enter number of student:");
    scanf("%d", &n);
    FILE *fptr;
    fptr = fopen("program.txt", "w");
    for (i = 0; i < n; i++)
    {

        printf("\nfor student %d\nEnter name:", i + 1);
        // scanf("%[^\n]s", &name);
        fflush(stdin);
        // gets(name);
        fgets(name, 50, stdin);
        printf("Enter marks:");
        scanf("%d", &marks);
        fprintf(fptr, "\nName:%s \nMark:%d", name, marks);
    }
    fclose(fptr);
    return 0;
}