#include<stdio.h>

int main(void){

    char sen[100],loopstp;
    sen[0]=' ';
    int noc=1;
    printf("Enter a sentence:");
    for(int n=1; ;++n){
        
        loopstp=getchar();
        if((loopstp!='?')&&(loopstp!='.')&&(loopstp!='!')){

            sen[n]=loopstp;
            noc++;
            continue;
        }
        break;
    }

    printf("\nReversal of sentence:");
    int j=0;
    for(int n=noc-1;n>=0;n--){
        
        if(sen[n]==' '){
            for(int i=n+1;j>0;i++,j--){
                putchar(sen[i]);
            }
            if(n==0){
                putchar(loopstp);
            }
            else{
                printf(" ");
            }
            continue;
        }
        j++;
    }
    return 0;
}