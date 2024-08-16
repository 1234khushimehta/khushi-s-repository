#include<stdio.h>
int main()
{
    int number ;
    printf("enter number-  ");
    scanf("%d",&number);

    if(number>0)
    {
        printf("+ev");
    }
    else if(number<0)
    {
        printf("-ev");
    }
    else
    {
        printf("zero");
    }
    return 0;
}