#include<stdio.h>

int main(void){

    int i,j;
    printf("Enter two positive integers:");
    scanf("%d%d",&i,&j);

    printf("%d,%d\n",(-i)/j,-(i/j));

    return 0;
}