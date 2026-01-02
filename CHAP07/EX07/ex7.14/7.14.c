#include<stdio.h>

int main(void){

    float frac_part,f;
    printf("Enter a fractional number:");
    scanf("%f",&f);
    frac_part=f-(int)f;
    printf("Fractinal part:%f\n",frac_part);
    return 0;
}