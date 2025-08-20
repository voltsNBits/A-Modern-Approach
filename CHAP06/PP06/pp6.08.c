#include<stdio.h>

int main(void){

    int d,sd;
    printf("Enter number of days in month:");
    scanf("%d",&d);
    printf("Enter starting day of the week (1=SUN, 7=SAT):");
    scanf("%d",&sd);

    for(int i=1;i<sd;++i){
        printf("   ");
    }
    for(int i=1;i<d;++i){
        printf("%3d",i);
        if((sd+i-1)%7==0)
           printf("\n");
    }
    return 0;
}