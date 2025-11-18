#include<stdio.h>
int main ()
{
    int a,b,c,d;
    char e;
    printf("enter any 2 numbers");
    scanf("%d%d",&a,&b);
    printf("enter the operator");
    scanf(" %c",&e);

    switch (e)
    {
    case '+':
        c=a+b;
        printf("the answer = %d\n",c);
        break;
    
    case '-' :
        c=a-b;
        printf("the answer = %d\n",c);
        break;




     case '*' :
        c=a*b;
        printf("the answer = %d\n",c);
        break;




    case '/' :
       if (b==0){
        printf("user given wrong value");
       }
    
       else{
        c=a/b;
        printf("the answer = %d\n",c);
        break;
       }
    default:
        break;
    }
    return 0;
}