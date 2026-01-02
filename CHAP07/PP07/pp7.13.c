#include<stdio.h>

int main(void){

    char ch;
    float tw=1,tl=0;
    printf("Enter a sentence:");
    while((ch=getchar())!='\n'){
        if(ch==' ')
           ++tw;
        else
           ++tl;
    }
    printf("Average word length:%f\n",tl/tw);
    return 0;
}