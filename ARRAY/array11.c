#include<stdio.h>
int main(){
    int n,i;
    int arr[100];
    printf("enter the number of element(1 to 100):");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter number %d:",i+1);
        scanf("%d",&arr[i]);

    }
    //storing the largest number to arr[0]
    for( i=1;i<n;i++){
        if(arr[0]<arr[i]){
        arr[0]=arr[i];
        }
    }
    printf("largest number=%d",arr[0]);
}