#include<stdio.h>
void main()
{
    char ch;
    printf("enter your grade:  ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a'
           :printf("grade a");
           break ;
        case 'b'
           :printf("grade b");
           break ;
        case 'c'
           :printf("grade c");
           break;
        default : 
        printf("wrong choice");     
    }
}