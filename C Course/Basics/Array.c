# include <stdio.h>
# include <string.h> 

int main(){
    /* int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name [] = "Mayssem Tlili";

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }

    printf("\n");

    int scores[5] = {0};

    int size1 = sizeof(scores) / sizeof(scores[0]);
    for(int i = 0; i < size1 ; i++){
        printf("Enter score number %d : ", i+1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < size1 ; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");
    
    // 2D Array = An array where each element is an array.
    //  array[][] = {{}, {}, {}};

    int array[][3] = {{1, 2, 3}, 
                      {4, 5, 6}, 
                      {7, 8, 9}};
    for (int i = 0; i < 3; i++){  // rows
        for (int j = 0; j < 3; j++){  // columns
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }*/

    // Array of Strings

    char fruit[][10] = {"Apple", 
                        "Banana",
                        "Coconut"};    
    int size = sizeof(fruit) / sizeof(fruit[0]);
    fruit[0][0] = 'e';
    fruit[0][4] = 'A';
    for(int i = 0; i < size; i++){
        printf("%s\n", fruit[i]);
    }

    char names[3][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < rows; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for (int i = 0 ; i < rows ; i++){
        printf("%s\n", names[i]);
    }


    return 0;
}