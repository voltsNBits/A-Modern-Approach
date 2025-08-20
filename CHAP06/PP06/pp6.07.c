#include<stdio.h>
#include<windows.h>

int main(void){
    int n,odd;

    printf("This program prints a table of squares.\n");
    printf("Enter numer of entries in table:");
    scanf("%d",&n);

    odd=3;
    for(int i=1,square=1;i<=n;odd+=2,++i){
        printf("%10d%10d\n",i,square);
        square +=odd;
        Sleep(1000);
    }
    return 0;
}