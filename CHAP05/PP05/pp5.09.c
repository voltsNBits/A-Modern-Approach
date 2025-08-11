#include<stdio.h>

int main(void){

    int df,mf,yf,ds,ms,ys;
    printf("Enter first date (mm/dd/yy) :");
    scanf("%d /%d /%d",&mf,&df,&yf);
    printf("Enter second date (mm/dd/yy) :");
    scanf("%d /%d /%d",&ms,&ds,&ys);

        if (yf==ys){
            if(mf==ms){
                if(df==ds)
                    printf("Both dates are same\n");
                else if(df>ds)
                    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",ms,ds,ys,mf,df,yf);
                else
                    printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",mf,df,yf,ms,ds,ys);
            }
            else if(mf>ms)
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",ms,ds,ys,mf,df,yf);
            else
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",mf,df,yf,ms,ds,ys);
        }
        else if(yf>ys)
            printf("%d/%d/%,2d is earlier than %d/%d/%.2d\n",ms,ds,ys,mf,df,yf);
        else
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",mf,df,yf,ms,ds,ys);

    return 0;
}