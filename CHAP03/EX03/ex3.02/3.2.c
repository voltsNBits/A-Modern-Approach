#include<stdio.h>

int main(void){
    
    float x=23.0864523f;
    printf("%-8.1e\n",x);   //2.3e+001 = 2.3*10^1
    printf("%10.6e\n",x);   //2.308645e+001
    printf("%-8.3f\n",x);   //23.086
    printf("%6.0f\n",x);    //23
    return 0;
}