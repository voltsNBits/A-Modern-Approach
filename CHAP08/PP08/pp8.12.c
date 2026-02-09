#include<stdio.h>
#include<ctype.h>

int main(void){

    int sum=0;
    char value[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,8,4,10};
    char ch;

    printf("Enter a word:");
    while((ch=getchar())!='\n'){
        ch=toupper(ch);
        if((ch>=5)&&(ch<=90)){
            sum+=value[ch-65];
        }
        else{
            printf("INVALID ENTRY\n");
            return 0;
        }
    }
    
    printf("Scrabble value: %d\n",sum);
    return 0;
}