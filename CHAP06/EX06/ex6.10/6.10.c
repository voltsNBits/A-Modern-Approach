#include<stdio.h>

int main(void){

    for(int i=0;i<=5;++i){
        if(i==3)
           goto end_loop; 

        printf("%d\n",i);
    end_loop: ;
    }
    return 0;
}