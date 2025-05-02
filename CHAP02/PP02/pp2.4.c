#include<stdio.h>

int main()
{
    int amt;
    float amtwtax;
    printf("Enter the amount:");
    scanf("%d",&amt);
    amtwtax=amt+(0.05*amt);
    printf("The amount with 5ptax is:%.2f\n",amtwtax);
    return 0;
}
