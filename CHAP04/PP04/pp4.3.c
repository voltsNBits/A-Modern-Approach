#include<stdio.h>

int main(void){

    int n,n1,n2,n3,nr;

    printf("Enter a three-digit number:");
    scanf("%1d%1d%1d",&n1,&n2,&n3);
    n =n1*100+n2*10+n3;
    nr=n3*100+n2*10+n1;
    printf("The entered number is:%d\n",n);
    printf("The reversal is:%d\n",nr);

    return 0;
}