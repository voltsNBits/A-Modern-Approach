#include<stdio.h>
#include<ctype.h>

int main(void){

    int n,check[26]={0};
    printf("Enter first word:");
    while(1){

        n=tolower(getchar());
        if((n>='a')&&(n<='z')){
            check[n-97]++;
        }
        else{
            break;
        }
    }
    //n=getchar();// To flush away the character used to stop first loop
    printf("Enter second word:");
    while(1){
        n=tolower(getchar());
        if((n>='a')&&(n<='z')){
            check[n-97]--;
        }
        else{
            break;
        }
    }
    for(int i=0;i<26;i++){
        if(check[i]!=0){
            printf("The words are not anagrams");
            return 0;
        }
    }
    printf("The words are anagrams");
    return 0;
}