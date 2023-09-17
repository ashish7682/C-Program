#include<stdio.h>
int main(){
    int mark[4];
    printf("enter phy:");
    scanf("%d",&mark[0]);
     printf("enter chem:");
    scanf("%d",&mark[1]);
    printf("enter math:");
    scanf("%d",&mark[2]);
    printf("enter bio:");
    scanf("%d",&mark[3]);
printf("phy=%d,chem=%d,math=%d,bio=%d",mark[0],mark[1],mark[2],mark[3]);
}