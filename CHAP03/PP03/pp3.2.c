#include<stdio.h>

int main(void){
    int ino,d,m,y;
    float up;

    printf("Enter item number:");
    scanf("%d",&ino);
    printf("Enter unit price:");
    scanf("%f",&up);
    printf("Enter purchase date (mm,dd,yyyy):");
    scanf("%d/%d/%d",&m,&d,&y);
    
    printf("ITEM\tUNITPRICE\tPURCHACEDATE\n");
    printf("----\t---------\t------------\n");
    printf("%-4d\t$%9.2f\t%d/%d/%d\n",ino,up,m,d,y);

    return 0;
}