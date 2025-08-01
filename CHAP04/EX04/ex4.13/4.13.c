#include<stdio.h>

int main(void){

    int i=0;

    printf("%d\n",i++ );  // 0
    printf("%d\n",++i );  // 2
    printf("%d\n",i+=1);  // 3

    return 0;
}