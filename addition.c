#include<stdio.h>
int main()
{
    int a,b;
    a=12;
    b=6;

    printf("%d+%d=%d",a,b,a+b);
    printf("\n %d-%d=%d",a,b,a-b);
    printf("\n %d*%d=%d",a,b,a*b);
    printf("\n %d/%d=%d",a,b,a/b);
    printf("\n %d %% %d=%.2d",a,b,a%b);
    return 0; 
}