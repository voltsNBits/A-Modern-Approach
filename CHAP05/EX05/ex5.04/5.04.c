#include<stdio.h>

int main(void){

    int i,j,k;
    
    printf("Enter i and j:");
    scanf("%d%d",&i,&j);

    k=(i>j)-(i<j);
    
    if(k==-1)
        printf("i<j");
    if(k==0)
        printf("i=j");
    if(k==1)
        printf("i>j");
    
    return 0;
    
}