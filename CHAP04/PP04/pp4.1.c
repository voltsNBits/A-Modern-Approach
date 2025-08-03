#include <stdio.h>

int main(void){

    int n,n1,n2,nr;

    printf("Enter a two-digit number:");
    scanf("%2d",&n);
    n1 = n/10;
    n2 = n%10;
    nr = n2*10+n1;
    printf("The reversal is:%d\n",nr);

    return 0;
}