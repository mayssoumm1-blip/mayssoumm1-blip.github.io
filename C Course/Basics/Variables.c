#include <stdio.h>
#include <stdbool.h>
int main() {
    // int: entier %d--> decimal
    // float: réel %f--> float
    // double: réel long %lf-->long float
    // char: caractère %c-->caracter
    // char []: chaine de caractère %s-->string
    // bool: booléen %d

    int age = 20;
    int year = 2025;
    printf("You are %d years old!\n", age);
    printf("The year is %d!\n", year);
    
    float gpa = 3.5;
    printf("Your GPA is: %.1f\n", gpa);
    
    double pi = 3.14159265359;
    printf("The value of Pi is : %.12lf\n", pi);

    char currency = '$';
    printf("The currency is %c\n", currency);
    
    char name[] = "";
    char exclamation = '!';
    printf("My name is %s%c\n", name, exclamation);
    
    bool isOnline = 1  ;
    if(isOnline){
        printf("You are Online");
    }
    else{
        printf("You are offline");
    }

    return 0;
}