#include<stdio.h>
int swap(int *ptr1, int *ptr2){
    int temp;
    temp =*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main()
{
  int num1,num2;
  printf("enter the number\n");
  scanf("%d%d",&num1,&num2);
    printf("befor swap: num1 = %d, num2 = %dn", num1, num2);
    swap(&num1, &num2);
    printf("after swap: %d\n, %d",num1,num2);
}