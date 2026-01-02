#include<stdio.h>

int main(void){
    int i,n;

    printf("This program prints a table of squares.\n");
    printf("Enter numer of entries in table:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%10d%20ld\n",i,(long)i*i);  
    }
    return 0;
}
// For a 32 bit system, 
//short = 2 bytes(16 bits),failure at n=182
//int = 4 bytes(32 bits)  ,failure at n=46341
//long = 4 bytes(32 bits) ,failure at n=46341