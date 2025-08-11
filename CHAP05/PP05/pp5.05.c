#include<stdio.h>

int main(void){

    float income,tax;
    
    printf("Enter income:");
    scanf("%f",&income);
    
        if(income<750)
            tax=.01f*income;
        else if(income<2250)
            tax=7.50+.02f*(income-750);
        else if(income<3750)
            tax=37.50+.03f*(income-2250);  
        else if(income<5250)
            tax=82.50+.04*(income-3750);
        else if(income<7000)
            tax=142.50+.05f*(income-5250);
        else 
            tax=230+.06f*(income-7000);
    
    printf("tax:$%.2f\n",tax);
    return 0;
}