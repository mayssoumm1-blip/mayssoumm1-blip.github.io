# include <stdio.h>
# include <windows.h>

void main (){
    // switch = An alternative to using many if-else statements 
    // break = Break out of a loop (STOP)
    // continue = Skip current cycle of a look (SKIP)

    int dayOfWeek = 0;
    printf("Enter a day of the week (1-7): ");
    scanf("%d", &dayOfWeek);
    for (int i = 1; i<= 10; i++){
        if(i == 4){
            continue;
        }
        Sleep(1000);
        printf("%d\n", i);
    }
    switch (dayOfWeek){
        case 1: 
            printf("It is Monday!");
            break;
        case 2: 
            printf("It is Tuesday!");
            break;
        case 3: 
            printf("It is Wednesday!");
            break;
        case 4: 
            printf("It is Thursday!");
            break;
        case 5: 
            printf("It is Friday!");
            break;
        case 6: 
            printf("It is Saturday!");
            break;
        case 7: 
            printf("It is Sunday!");
            break;
        default:
            printf("Please only enter a number between 1 and 7");
    }
    
}