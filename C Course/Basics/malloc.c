#include <stdio.h>
#include <stdlib.h>

int main(){
    // malloc() = (memomy allocation) A function in C that dynamically allocates a specified number of bytes in memomry

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));
    
    // To check if the malloc function failed since dereferencing a NULL pointer can lead to a segmentation fault
    if (grades == NULL){
        printf("Memory allocation failed !\n");
        return 1; // exit code
    }

    for(int i = 0; i < number ; i++){
        printf("Enter grade number%d : ", i+1);
        scanf(" %c", &grades[i]);
    }
    for(int i = 0; i < number ; i++){
        printf("%c ", grades[i]);
    }

    free(grades); // returning "rented" space back to the Operating System
    grades = NULL; // avoids dangling pointers

    return 0;
}