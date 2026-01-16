# include <stdio.h>
# include <stdbool.h>

int main() {
    int age = 0;
    bool isStudent = 1;
    printf("Enter Your Age : ");
    scanf("%d", &age);

    if (age >= 65){
        printf("You are a senior!");
    }
    else if (age>=18) {
        printf("You are an adult!\n");
        printf("Are you a student?: ");
        scanf("%d", &isStudent);
        if(isStudent){
            printf("You are a student!");
        }
        else {
            printf("You are not a student!");
        }
    }
    else if (age<0){
        printf("You haven't been born yet!");
    }
    else if (age == 0){
        printf("You are a newborn!");
    }
    else{
        printf("You are a child!");
    }
    return 0;
}