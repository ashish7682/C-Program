#include <stdio.h>

int main()
{
    int m, n, i, j;
    printf("Enter number of row:");
    scanf("%d", &m);
    printf("Enter number  of column:");
    scanf("%d", &n);
    int a[m][n], b[m][n], c[m][n];
    printf("enter the first matrix:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The first matrix is:\n  ");
    for (int i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("the sum of two matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}