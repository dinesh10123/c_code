#include <stdio.h>
void bank();
int main() {
    bank(); 
    return 0;
}

void bank() {
    static float balance = 0;  
    int choice;
    float amount;

    while (1) {
        printf(" Bank Menu \n");
        printf("1.Deposit Money\n");
        printf("2.Withdraw Money\n");
        printf("3.Check Balance\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited %.2f successfully\n", amount);
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= balance && amount > 0) {
                    balance -= amount;
                    printf("Withdrawn %.2f successfully\n", amount);
                } else if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else {
                    printf("Insufficient funds!\n");
                }
                break;

            case 3: 
                printf("Your current balance: %.2f\n", balance);
                break;

            case 4: 
                printf("Thank you, Exiting.\n");
                return; 
            default:
                printf("Invalid choice, Give Proper Choice\n");
        }
    }
}

