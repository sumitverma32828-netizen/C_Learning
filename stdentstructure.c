#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    int roll;
} stu;

int main() {
    stu s[5]; 
    int i;

    
    for(i = 0; i <5; i++) {
        printf("Enter details for student %d:\n", i+1);

        printf("Enter name: ");
        scanf("%s", &s[i].name); 
        printf("Enter age: ");
        scanf("%d", &s[i].age);  

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll); 

        printf("\n");
    }

   
    printf("\n Student Details \n");
    for(i = 0; i < 5; i++) {
        printf("Student %d  Name: %s | Age: %d | Roll: %d\n", i+1, s[i].name, s[i].age, s[i].roll);
    }

    return 0;
}
