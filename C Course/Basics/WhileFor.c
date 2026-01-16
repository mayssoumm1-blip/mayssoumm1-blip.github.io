# include <stdio.h>
# include <string.h>
# include <stdbool.h>
# include <windows.h>

int main() {
    int number = 0;
    do{
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    }while (number <= 0);
    getchar();

    char name[50] = "";
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    while (strlen(name) == 0){
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    bool isRunning = true;
    char response = '\0';
    while(isRunning){
        printf("You are playing a game! \n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y' &&  response != 'y'){
            isRunning = true;
        }
        else{
            isRunning = false;
            for(int i = 5; i>=0; i--){
                Sleep(1000);
                printf("%d\n", i);
            }
            printf("Happy New Year !\n");
        }
    }
    printf("You exit the game !");

    return 0;
}