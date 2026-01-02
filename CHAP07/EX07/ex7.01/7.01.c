#include<stdio.h>

int main(void){

    int o,h;
    printf("Enter the octal number:");
    scanf("%o",&o);
    printf("Decimal form:%d\n",o);
    
    printf("Enter the hexadecimal number:");
    scanf("%x",&h);
    printf("Decimal form:%d\n",h);

    return 0;
}