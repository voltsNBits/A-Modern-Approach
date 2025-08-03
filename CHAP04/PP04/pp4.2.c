#include <stdio.h>

int main(void){

    int n,n1,n2,n3,nr;

    printf("Enter a three-digit number:");
    scanf("%3d",&n);
    n1 = n/100;
    n3 = n%100;
    n2 = n3/10;
    n3 = n3%10;
    nr = n3*100+n2*10+n1;
    printf("The reversal is:%d\n",nr);
  //printf("The reversal is:%d%d%d\n", n%10,(n/10)%10,n/100 );

    return 0;
}