#include<stdio.h>
int main()
{
    int a;
    printf("enter any number from 1 to 7 :");
    scanf("%d",&a);
    switch (a)
    {
    case '1' :
        printf("mon");
        break;


    case '2':
        printf("tue");
        break;

    case '3':
        printf("wen");
        break;


    case '4':
        printf("thu");
        break;

    case '5':
        printf("fri");
        break;

    case '6':
        printf("sat");
        break;

    case '7' :
        printf("sun");
        break;


        
    
    default:
    if(a<7){
        printf("only enter num till 7");
    }
        break;
    }
    return 0;
}