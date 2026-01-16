# include <stdio.h>
# include <ctype.h>

//  QUIZ GAME

int main(){

    char questions[][100] = {"What is the largest planet in the solar system?",
                             "What is the hottest planet?",
                             "What planet has the most moons?",
                             "Is the earth flat?"};
    
    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                           "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
                           "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                           "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    char guess = '\0';
    int score = 0;
    printf("*** QUIZ GAME ***\n");

    for(int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answerKey[i]){
            printf("CORRECT ! The answer is %c !\n", answerKey[i]);
            score++;
        }
        else{
            printf("WRONG ! The answer is %c !\n", answerKey[i]);
        }   
    }
    printf("\nYour final score is %d out of %d points! \n", score, questionCount);
    return 0;
}