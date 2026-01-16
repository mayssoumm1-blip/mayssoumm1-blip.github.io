#include <stdio.h>
#include <stdlib.h>

int main(){
    // realloc() = Reallocation.
    // Resize previously allocated memory       realloc(ptr, bytes)

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));
    if(prices == NULL){
        printf("Memory Allocation failed!\n");
        return 1;
    }

    for(int i = 0; i<number; i++){
        printf("Enter price number%d: ", i+1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));
    if(temp == NULL){
        printf("Could not reallocate memory!\n");
    }
    else{
        prices = temp;
        for(int i = number; i<newNumber; i++){
            printf("Enter price number%d: ", i+1);
            scanf("%f", &prices[i]);
        }
        for(int i = 0; i<newNumber; i++){
            printf("Price number%d: $%.3f\n", i+1, prices[i]);
        }
    }

    free(prices);
    prices = NULL;

    return 0;
}