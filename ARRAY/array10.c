#include<stdio.h>
int main(){
    int n,i;
    float num[100],sum=0.0,avg;
    printf("enter the number of element:");
    scanf("%d",&n);
    while(n>100||n<1)
    {
    printf("error! number should in range");
    printf("enter the number again ");
    scanf("%d",&n);
    }
    for(i=0;i<n;i++)
    {
        printf("%d enter number:",i);
        scanf("%f",&num[i]);
        sum=sum+num[i];
    }
    avg=sum/n;
    printf("avg=%f",avg);
    return 0;
}