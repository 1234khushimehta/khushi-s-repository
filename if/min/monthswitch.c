#include<stdio.h>
void main()
{
    char ch;
    printf("enter your num: ");
    scanf("%c,ch");

    switch(ch)
    {
        case 1:
             printf("janurary");
             break;
        case 2:
             printf("februrary");
             break;
        case 3:    
             printf("march");
             break;
        case 4:     
             printf("april");
             break;
        case 5:     
             printf("may");
             break;
        case 6:     
             printf("june");
             break;
        case 7:     
             printf("july");
             break;
        case 8:     
             printf("august");
             break;
        case 9:     
             printf("september");
             break;
        default:
             printf("not valid");     
    }
}