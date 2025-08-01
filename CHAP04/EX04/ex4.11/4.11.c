#include<stdio.h>

int main(void){

    int i,j,k;

    i=1;
    printf("%d\n",i++ -1);           // 0
    printf("%d\n",i);                // 2

    i=10;j=5;
    printf("%d\n",i++ - ++j);        // 4
    printf("%d %d\n",i,j);           //11 6

    i=7;j=8;
    printf("%d\n",i++ - --j);        // 0
    printf("%d %d\n",i,j);           // 8 7

    i=3;j=4;k=5;
    printf("%d\n",i++ - j++ + --k);  // 3
    printf("%d %d %d\n",i,j,k);      // 4 5 4

    return 0;
}