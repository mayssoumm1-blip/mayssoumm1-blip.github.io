#include <stdio.h>

typedef enum{MONDAY=1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY}Day;

typedef enum{SUCCESS, FAILURE, PENDING}status;

void connectStatus(status stat);

int main(){
    // enum = A user-defined data type that consists of a set of named integer constants.
    // Benefit: Replaces numbers with readable names.

    Day today = FRIDAY;
    printf("%d\n", today);

    if(today == 6 || today == 7){
        printf("It's the weekend!\n");
    }else{
        printf("It's a weekday!\n");
    }

    status stat = FAILURE;
    connectStatus(stat);

    return 0;
}

void connectStatus(status stat){
    switch(stat){
        case SUCCESS:printf("Connection was successful!\n");break;
        case FAILURE:printf("Could not connect!\n");break;
        case PENDING:printf("Connecting...\n");break;
    } 
}
