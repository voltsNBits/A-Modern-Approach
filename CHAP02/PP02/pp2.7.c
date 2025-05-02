#include <stdio.h>

int main(){
    int doll,$twen,$ten,$fiv,$one;
    printf("Enter the dollar amount:");
    scanf("%d",&doll);
    $twen=(doll/20);
    doll=doll-(20*$twen);
    $ten=(doll/10);
    doll=doll-(10*$ten);
    $fiv=(doll/5);
    doll=doll-(5*$fiv);
    $one=doll;
    printf("$20 bills:%d\n",$twen);
    printf("$10 bills:%d\n",$ten);
    printf("$5 bills:%d\n",$fiv);
    printf("$1 bills:%d\n",$one);
    return 0;
}