#include<stdio.h>

int main(void){

    printf("Size of int        :%d bytes\n", (int)sizeof(int));    //4
    printf("Size of short      :%d bytes\n", (int)sizeof(short));  //2
    printf("Size of long       :%d bytes\n", (int)sizeof(long));   //4
    printf("Size of float      :%d bytes\n", (int)sizeof(float));  //4
    printf("Size of double     :%d bytes\n", (int)sizeof(double)); //8
    printf("Size of long double:%d bytes\n", (int)sizeof(long double));//12

    return 0;
}