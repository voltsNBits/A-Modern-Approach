#include<stdio.h>

int main(void){

    char sen[80];
    int noc=0;
    printf("Enter message to be encrypted:");
    for(int i=0;;i++){
        sen[i]=getchar();
        noc++;
        if(sen[i]=='.')
            break;
    }

    int shift;
    printf("Enter shift amount(1-25):");
    scanf("%d",&shift);

    for(int i=0;i<noc;i++){
        if((sen[i]>='A')&&(sen[i]<='Z')){
            sen[i]=((sen[i]-'A')+shift)%26+'A';
        }
        if((sen[i]>='a')&&(sen[i]<='z')){
            sen[i]=((sen[i]-'a')+shift)%26+'a';
        }
    }

    printf("Encrypted message:");
    for(int i=0;i<noc;i++){
        putchar(sen[i]);
    }

    return 0;
}