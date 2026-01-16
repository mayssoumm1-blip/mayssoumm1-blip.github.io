#include <stdio.h>

typedef struct {
    char model[50];
    int year;
    int price;
}Car;

void printCar(Car car);

int main(){
    // Array of structs = Array where each element contain a struct {}
    // Helps organize and group together related data.

    Car cars[] = { {"Mustang", 2025, 32000}, {"Corvettte", 2026, 68000}, {"Challenger", 2024, 29000}};
    
    int number = sizeof(cars) / sizeof(cars[0]);
    for(int i = 0; i < number; i++){
        printf("Car number %d:\n", i+1);
        printCar(cars[i]);
    }
    return 0;
}

void printCar(Car car){
    printf("Model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    printf("Price: $%d\n", car.price);
    printf("\n");
}