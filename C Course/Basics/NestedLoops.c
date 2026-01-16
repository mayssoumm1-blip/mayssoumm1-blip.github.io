# include <stdio.h>

int main (){
    for (int i =1 ; i <= 10; i++){
        for (int j= 1; j < 10 ; j++ ){
            printf("%3d ", j*i);
        }
        printf("\n");
    }
    int row = 0;
    int column = 0;
    char symbol = '\0';
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &column);

    printf("Enter a symbol: ");
    scanf(" %c", &symbol);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%C", symbol);
        }
        printf("\n");
    }

    return 0;
}
