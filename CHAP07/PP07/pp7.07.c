#include<stdio.h>

int main(void){
    int num1,denom1,num2,denom2;
    float frac1,frac2,res;
    char ch;
    printf("Enter two fractions separated by operator(+,-,*,/):");
    scanf("%d/%d",&num1,&denom1);
    frac1=((float)num1)/denom1;
    ch=getchar();
    scanf("%d/%d",&num2,&denom2);
    frac2=((float)num2)/denom2;
        switch(ch){
            case '+':
            res=frac1+frac2;break;
            case '-':
            res=frac1-frac2;break;
            case '*':
            res=frac1*frac2;break;
            case '/':
            res=frac1/frac2;break;
            default:
            printf("INVALID EXPRESSION\n");
            return 0;
        }
    printf("Result:%f",res);
    return 0;
}