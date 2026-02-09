#include<stdio.h>

int main(void){

    int n;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square:");
    scanf("%d",&n);

    int magsq[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            magsq[i][j]=0;
        }
    }

    int row=0,col=n/2;
    int nxt_row,nxt_col;
    for(int i=1;i<=(n*n);i++){
        magsq[row][col]=i;

        nxt_row=(row==0)? n-1:row-1;
        nxt_col=(col==n-1)? 0:col+1;

        if(magsq[nxt_row][nxt_col]!=0){
            row=(row==n-1)? 0:row+1;
        }
        else{
            row=nxt_row;
            col=nxt_col;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t\t",magsq[i][j]);
        }
        printf("\n");
    }
    return 0;
}