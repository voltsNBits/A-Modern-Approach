#include<stdio.h>

int main(void){

    char ch1,ch2;
    printf("Enter a first and last name:");
    scanf(" %c",&ch1);
    while((ch2=getchar())!=' ');
    
    while((ch2=getchar())!='\n'){
        putchar(ch2);
    }
    printf(", %c\n",ch1);
    return 0;
}