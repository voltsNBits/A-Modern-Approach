#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void){

    int teenager,age;
    
    printf("Enter age:");
    scanf("%d",&age);

        if((age>=13)&&(age<=19))
            teenager=TRUE;
        else
            teenager=FALSE;
    
    printf("%d\n",teenager);
    return 0;
}