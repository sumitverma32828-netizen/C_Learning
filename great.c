#include<stdio.h>
int main(){
    int num1, num2;

    printf("enter num 1: ");
    scanf("%d, &num1");

    printf("enter num 2: ");
    scanf("%d, &num2");

    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } 
    else if (num2 > num1) {
        printf("%d is greater than %d\n", num2, num1);
    } 
    else {
        printf("Both numbers are equal.\n");
    }
}