#include<stdio.h>
int main(){
    int r,c,j,a[100][100],b[100][100],sum[100][100],i;
    printf("enter the number of rows:");
    scanf("%d",&r);
    printf("enter the number of columns:");
    scanf("%d",&c);

    printf("element of  1st matrix:");
    for(i=0;i<r;++i)
    {
    for(j=0;j<c;++j)
    {
        printf("enter element a%d%d:",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    }

    printf("element of  2nd matrix:");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        printf("enter element b%d%d:",i+1,j+1);
        scanf("%d",&b[i][j]);
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
    }
    printf("n sum of two matrices:\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        printf("%d",sum[i][j]);
        if(j==c-1){
            printf("\n");
        }
        return 0;
    }

}
}