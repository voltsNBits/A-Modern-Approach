#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the value of x:");
    scanf("%d",&x);
    y=(3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6;
    printf("value of y for x=%d is:%d",x,y);
    return 0;
}