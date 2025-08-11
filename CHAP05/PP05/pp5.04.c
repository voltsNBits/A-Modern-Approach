#include<stdio.h>

int main(void){

    int ws;

    printf("Enter the wind speed (in knots):");
    scanf("%d",&ws);

        if(ws<0)
            printf("Invalid Entry");
        else if(ws==0)
            printf("Calm\n");
        else if(ws<=3)
            printf("Light air\n");
        else if(ws<=27)
            printf("Breeze\n");
        else if(ws<=47)
            printf("Gale\n");
        else if(ws<=63)
            printf("Storm");
        else 
            printf("Hurricane");

    return 0;   
}