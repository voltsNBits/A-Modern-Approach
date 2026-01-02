#include<stdio.h>

int main(void){

    float n1,n2;
    char ch;
    printf("Enter an expression:");
    scanf("%f",&n1);
    while((ch=getchar())!='\n'){
        scanf("%f",&n2);
        switch(ch){
            case '+':
            n1=n1+n2;break;
            case '-':
            n1=n1-n2;break;
            case '*':
            n1=n1*n2;break;
            case '/':
            n1=n1/n2;break;
            default:
            printf("INVALID EXPRESSION\n");
            return 0;
        }
    }
    printf("Value of epression:%f",n1);
    return 0;
}