#include<stdio.h>

int main(void){

    int n1,n2,n3,n4,nl,ns,nl2,ns2;

    printf("Enter four integers:");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

         if(n2>n1){
           nl=n2;
           ns=n1;
         }
         else{
           nl=n1;
           ns=n2;
         }
         if(n4>n3){
           nl2=n4;
           ns2=n3;
         }
         else{
           nl2=n3;
           ns2=n4;
         }

         if(nl2>nl)
           nl=nl2;
         if(ns2<ns)
           ns=ns2;
        
    printf("Largest: %d\n",nl);
    printf("Smallest: %d\n",ns);
    
    return 0;
}