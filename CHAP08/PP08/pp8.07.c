#include<stdio.h>

int main(){

    int arr[5][5]={0},rsum=0,csum=0;
    for(int i=0;i<5;i++){
        printf("Enter row %d: ",i);
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //ROW TOTAL
    printf("Row totals :");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            rsum+=arr[i][j];
        }
        printf("%d ",rsum);
        rsum=0;
    }
    //COLUMN TOTAL
    printf("\nColumn totals :");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            csum+=arr[j][i];
        }
        printf("%d ",csum);
        csum=0;
    }
    return 0;
}