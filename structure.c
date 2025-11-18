#include<stdio.h>
typedef struct { 
    char name[50];
    int age;
    int roll ;

}stu;
 
int main(){
       stu s1={"sumit",20,1};
       printf("the student detail=\n|%s|%d|\n",s1.name,s1.age,s1.roll);
return 0;
}
