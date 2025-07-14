#include <stdio.h>

int main(void){
    int d,m,y;

    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&m,&d,&y);

    printf("The entered date is:%d/%d/%d\n",y,m,d);
    return 0;
}