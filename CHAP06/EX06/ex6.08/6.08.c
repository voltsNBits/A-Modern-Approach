#include<stdio.h>
#include<windows.h>

int main(void){

    int i;
    for(i=10;i>=1;i/=2){
        printf("%d ",i++);
        Sleep(1000);
    }
    return 0; // 10 5 3 2 1 1 1 1....infite loop
}