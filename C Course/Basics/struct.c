#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;
void printStudent(Student student);
int main(){
    // struct = A custom container that holds multiple pieces of related information.
    // Similar to Objects in other languages.

    Student student1 = {"Spongebob", 30, 2.5, false };
    Student student2 = {"Patrick", 25, 1, true };
    Student student3 = {"Squidward", 47, 4.5, true};
    Student student4 = {0};

    strcpy(student4.name, "Sandy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-Time?: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}