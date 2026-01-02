#include<stdio.h>
#include<ctype.h>

int main(void){

    char ch,n=0;
    printf("Enter a Sentence:");
    while((ch=getchar())!='\n'){
        switch (toupper(ch)){
            case 'A': case 'E': case 'I': case 'O': case 'U':
            ++n;break;
            default:break;
        }
    }
    printf("Your sentence contains %d vowels.\n",n);
    return 0;
}