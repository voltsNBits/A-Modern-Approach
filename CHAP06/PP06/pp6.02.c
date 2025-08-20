#include<stdio.h>

int main(void){

    int m,n,x;

    printf("Enter two integers:");
    scanf("%d%d",&m,&n);

    while(n!=0){
        x=n;
        n=m%n;
        m=x;
    }
    printf("Greatest common divisor:%d\n",m);
    return 0;
}