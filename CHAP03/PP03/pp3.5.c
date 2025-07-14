#include <stdio.h>

int main(void){
    int n1,n2,n3,n4,n5,n6,n7,n8,n9;

    printf("Enter the numbers from 1 to 9 in any order:");
    scanf("%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4
        ,&n5,&n6,&n7,&n8,&n9);
    printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n"
        ,n1,n2,n3,n4,n5,n6,n7,n8,n9);
    printf("Row sums:%d,%d,%d\n",n1+n2+n3,n4+n5+n6,n7+n8+n9);
    printf("Column sum:%d,%d,%d\n",n1+n4+n7,n2+n5+n8,n3+n6+n9);
    printf("Diagonal sum:%d,%d\n",n1+n5+n9,n3+n5+n7);

    return 0;
}