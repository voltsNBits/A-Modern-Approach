#include<stdio.h>
#include<stdbool.h>

int main(void){
    
    do{ 
        bool digit_seen[10]={false};
        bool digit_rep[10]={false};
        int digit;
        long n,N;
        
        printf("Enter a number(0 to terminate):");
        scanf("%ld",&n);
        N=n;
        if(n<=0)
           return 0;
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
        printf("No repeated digit in %ld.\n",N);
        continue; 
        
    RD: printf("Repeated Digits in %ld are:",N);
        for(int i=0;i<10;i++){
            if(digit_rep[i])
            printf("%d, ",i);
        }
        printf("\n");
    }while(1);
}