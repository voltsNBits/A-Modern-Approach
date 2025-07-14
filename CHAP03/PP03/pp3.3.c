#include<stdio.h>

int main(void){
    int gsi,grpidnt,pubcode,itmn,chkdgt;

    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d",&gsi,&grpidnt,&pubcode,&itmn,&chkdgt);
    printf("GSI prefix:%d\n",gsi);
    printf("Group identifier:%d\n",grpidnt);
    printf("Publisher code:%d\n",pubcode);
    printf("Item number:%d\n",itmn);
    printf("Check digit:%d\n",chkdgt);

    return 0;
}
