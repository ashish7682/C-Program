#include<stdio.h>
int main(){
    int i,j,n=10,a[10];
    printf("enter number of elment in array:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<n/2;i++){
        int t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;

    }
    for(i=0;i<10;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
}
