#include<stdio.h>

int main(void){

    int n,fact=1;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    while(n!=0){
      fact=fact*n;
      --n;
    }
    printf("Factorial:%d\n",fact);
    return 0;
}