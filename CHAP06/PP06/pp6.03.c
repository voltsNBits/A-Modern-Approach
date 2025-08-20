#include<stdio.h>

int main(void){

    int n,d,x,y,z;
    printf("Enter a fraction:");
    scanf("%d /%d",&n,&d);
    x=n;y=d;
    while(y!=0){
        z=y;
        y=x%y;
        x=z;
    }
    n/=z;d/=z;
    printf("In lowest terms:%d/%d\n",n,d);
    return 0;
}