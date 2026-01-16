#include <stdio.h>
#include <stdlib.h>

int main(){
    // calloc = Contiguous Allocation.
    // Allocates memory dynamically and sets all allocated bytes to 0.
    // malloc(#bytes) is faster, but calloc(#elements, size) leads to less bugs

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));

    if(scores == NULL){
        printf("\nMemory Allocation failed!");
        return 1;
    }

    for(int i = 0; i< number; i++){
        printf("Enter score number %d: ", i+1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i< number; i++){
        printf("score of player #%d: %d\n", i+1, scores[i]);
    }

    free(scores);
    scores = NULL;

}