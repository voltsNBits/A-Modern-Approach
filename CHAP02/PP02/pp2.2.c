#include <stdio.h>
#define PI 3.14f

int main()
{
    float v,r=10;
    v=(4.0f/3.0f)*PI*r*r*r;
    //gives wrong output without ".0f" notation
    printf("Volume of sphere=%.2f\n",v);
    return 0;   
}