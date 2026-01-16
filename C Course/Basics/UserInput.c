#include <stdio.h>
#include <string.h>

int main() {
    int age = 0 ;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);
    fflush(stdin);
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("your age is: %d\n", age);
    printf("your gpa is: %.2f\n", gpa);
    printf("Your grade is: %c\n", grade);
    printf("Your name is: %s\n", name);
    
    return 0;
}