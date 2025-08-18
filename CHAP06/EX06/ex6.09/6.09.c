#include<stdio.h>
#include<windows.h>

int main(void){

    int i=10;
    while(i>=1){
        printf("%d ",i++);
        i/=2;
        Sleep(1000);
    }
    return 0; // 10 5 3 2 1 1 1 1....infite loop
}