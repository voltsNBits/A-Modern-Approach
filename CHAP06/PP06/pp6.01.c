#include<stdio.h>

int main(void){

    float i,n=0;
    do{
        printf("Enter a number:");
        scanf("%f",&i);
           if(i>n)
              n=i;
    }while(i>0);
     
    printf("The largest number entered was %.2f\n",n);
    return 0;
}