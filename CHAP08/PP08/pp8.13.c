#include<stdio.h>

int main(void){

    char ch1,ch2[20]={0};
    int n=0;
    printf("Enter a first and last name:");
    scanf(" %c",&ch1);
    while((getchar())!=' ');
    while((ch2[n++]=getchar())!='\n');
    printf("You entered the name:");
    for(int i=0;i<n-1;i++){
        putchar(ch2[i]);
    }
    printf(", %c\n",ch1);
    return 0;
}