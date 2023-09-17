#include<stdio.h>
int main()
{
    int values[10];
    printf("Enter the 5 integer:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&values[i]);
    }
    printf("Displaying integer:");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",values[i]);
    }
    return 0;

}