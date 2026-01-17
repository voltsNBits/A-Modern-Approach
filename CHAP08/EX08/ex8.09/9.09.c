#include<stdio.h>

int main(void){

    float temperature_readings[30][24] = {0};
    double average;

    for(int i=0;i<30;i++){
        printf("Enter hourly data for day %d:",i+1);
        for(int j=0;j<24;j++){
           scanf("%f",&temperature_readings[i][j]);
        }
    }
    for(int i=0;i<30;i++){
        for(int j=0;j<24;j++){
           average+=temperature_readings[i][j];
        }
    }
    printf("The overall average of monthly readings is:%.2f\n",average);

    return 0;
}