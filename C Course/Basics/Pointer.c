#include <stdio.h>

void birthday(int* age);

int main(){
    // Pointer = a variable that stores the memory address of another variable.
    // Benefit: They help avoid wasting memory by allowing you to pass the address of a large data structure instead of copying the entire data.
    
    int age =  25;
    int *pAge = &age;

    printf("%p\n", &age);//%p: used to print a pointer address in hexodimal
    printf("%p", pAge); 
    //pAge = &age : memory address of age
    printf("%d", *pAge); 
    //*pAge : pointer of age that has the value of age

    birthday(pAge); // or birthday(&age);
    printf("\nYou are %d years old!", age);

    return 0;   
}
void birthday(int* age){
    (*age)++;
}