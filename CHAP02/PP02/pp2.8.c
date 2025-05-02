#include <stdio.h>

int main(){
    float loan,intr,bal,paym;
    printf("Enter the loan amount:");
    scanf("%f",&loan);
    printf("Enterr the interest rate:");
    scanf("%f",&intr);  //anual interest rate
    printf("Enter the monthly payment:");
    scanf("%f",&paym);
    intr=(intr*0.01)/12;  //monthly interest rate
    bal=(loan-paym)+(loan*intr);
    printf("Balance remaining after first payment:%.2f\n",bal);
    bal=(bal-paym)+(bal*intr);
    printf("Balance remaining after second payment:%.2f\n",bal);
    bal=(bal-paym)+(bal*intr);
    printf("Balance remaining after third payment:%.2f\n",bal);
    return 0;
}