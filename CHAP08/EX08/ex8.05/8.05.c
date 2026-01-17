#include<stdio.h>

int main(void){

    int n1=0,n2=1,fib_numbers[40];

    printf("The fibonacci numbers are: ");
    fib_numbers[0]=0;
    fib_numbers[1]=1;
    for(int i=2;i<=40;++i){
        int sum=n1+n2;
        fib_numbers[i]=sum;
        n1=n2;n2=sum;
    }
    for(int i=0;i<=40;++i){
        printf("%d ",fib_numbers[i]);    
    }
    return 0;
}