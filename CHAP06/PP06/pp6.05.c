#include <stdio.h>

int main(void){

    int n,nr;

    printf("Enter a number:");
    scanf("%d",&n);
    printf("The reversal is:");
    do{
        nr=n%10;
        n/=10;
        printf("%d",nr);
    }while(n>0);
    
    return 0;
}