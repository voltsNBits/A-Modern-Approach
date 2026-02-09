#include<stdio.h>
#include<stdbool.h>

int main(void){
    
    bool digit_seen[10]={false};
    bool digit_rep[10]={false};
    int digit;
    long n;

    printf("Enter a number:");
    scanf("%ld",&n);

    while(n>0){
        digit=n%10;
        if(digit_seen[digit])
           digit_rep[digit]=true;
        digit_seen[digit]=true;
        n/=10;
    }
    for(int i=0;i<10;i++){
        if(digit_rep[i])
           goto RD;
    }   
    printf("No repeated digit");
    return 0; 
        
RD: printf("Repeated Digits are:");
    for(int i=0;i<10;i++){
            if(digit_rep[i])
            printf("%d ",i);
    }
    return 0;
}