#include <stdio.h>

int main(){
    int npaym;
    float loan,intr,bal,paym;
    printf("Enter the loan amount:");
    scanf("%f",&loan);
    printf("Enterr the interest rate:");
    scanf("%f",&intr);  //anual interest rate
    printf("Enter the monthly payment:");
    scanf("%f",&paym);
    intr=(intr*0.01)/12;  //monthly interest rate
    printf("Enter the number of payments:");
    scanf("%d",&npaym);
    bal=loan;
    for(int i=0,x=npaym;i<npaym;--npaym){
        bal=(bal-paym)+(loan*intr);
        printf("Balance remaining after %d payment:%.2f\n",(x-(npaym-1)),bal);
    }
    
    return 0;
}