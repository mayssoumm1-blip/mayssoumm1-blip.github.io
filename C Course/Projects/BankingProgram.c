# include <stdio.h>

//  BANKNG PROGRAM

void checkBalance(float balance);
float deposit();
float withdraw(float balance);
float Deposit(float balance);

int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("*** WELCOME TO THE BANK ***\n");
    do{
        printf("\nSelect an option :");
        printf("\n1. Check Balance \n");
        printf("2. Deposit Money \n");
        printf("3. Withdraw Money \n");
        printf("4. Transfer money \n");
        printf("5. Exit \n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            
            break;
        case 5:
            printf("\nTHANK YOU FOR USING THE BANK !\n");
            break;
        default:
            printf("\nInvalid choice ! Please select 1 - 4 !\n");
        }
    }while (choice != 4);

    return 0;
}

void checkBalance(float balance){
    printf("\nYour current balance is: $%.2f\n", balance);
}

float deposit(){

    float amount = 0.0f;

    printf("\nEnter amount to deposit: $");
    scanf("%f", &amount);

    if (amount < 0){
        printf("Invalid amount !\n");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }
}

float withdraw(float balance){

    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");
    scanf("%f", &amount);
    
    if(amount < 0){
        printf("Invalide amount !\n");
        return 0.0f;
    }
    else if(amount > balance) {
        printf("Insufficient funds!\nYour balance is $%.2f\n", balance);
        return 0.0f;
    }
    else{
        printf("Successfully withdrew $%.2f\n", amount);
        return amount;
    }
}

float Deposit(float balance){
    float Deposit = 0.0f;
    int RIB = 0;
    while (10000000<=RIB<=99999999){
    }
    return Deposit;
}
