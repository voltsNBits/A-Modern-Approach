#include<stdio.h>

int main(void){

    int n;

    printf("Enter a number in between 0-9999:");
    scanf("%d",&n);
    {
        if((n<=9)&&(n>=0))
            printf("The number %d has 1 digit\n",n);
        if((n<=99)&&(n>=10))
            printf("The number %d has 2 digit\n",n);
        if((n<=999)&&(n>=100))
            printf("The number %d has 3 digit\n",n);
        if((n<=9999)&&(n>=1000))
            printf("The number %d has 4 digit\n",n);
        if(n>9999)
            printf("The number %d has more than 4 digits\n");
    }
    return 0;
}