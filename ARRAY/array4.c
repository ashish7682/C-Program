#include<stdio.h>
int main(){
    char a[10],i;
    for(i=0;i<10;i++){
        scanf("%c",&a[i]);
        fflush(stdin);
    }
    for(i=0;i<10;i++){
        printf("%c ",a[i]);
    }
    return 0;
}