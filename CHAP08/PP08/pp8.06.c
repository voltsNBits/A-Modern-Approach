#include<stdio.h>
#include<ctype.h>
#define N 30
int main(void){

    char c[N];
    printf("Enter message:");
    int n=0;
    do{
        scanf("%c",&c[n]);
    }while((c[n++])!='\n');
    printf("In BIFF-speak:");
    for(int i=0;i<n-1;i++){
        c[i]=toupper(c[i]);
        switch(c[i]){
            case 'A':c[i]='4';break;
            case 'B':c[i]='8';break;
            case 'E':c[i]='3';break;
            case 'I':c[i]='1';break;
            case 'O':c[i]='0';break;
            case 'S':c[i]='5';break;
            default:break;
        }
        putchar(c[i]);
    }
    printf("!!!!!!!!!!!!!!!!\n");

    return 0;
}