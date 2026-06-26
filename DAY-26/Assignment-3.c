#include <stdio.h>

int main() {
    int pin = 1234; // Preset PIN
    int entered_pin, choice;
    float balance = 5000.0; // Initial account balance
    float amount;

    printf("--- Welcome to the ATM ---\n");
    printf("Please enter your 4-digit PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin != pin) {
        printf("Invalid PIN. Access denied.\n");
        return 1;
    }

    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited $%.2f. New balance: $%.2f\n", amount, balance);
                } else {
                    printf("Invalid amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else if (amount > 0) {
                    balance -= amount;
                    printf("Successfully withdrew $%.2f. Remaining balance: $%.2f\n", amount, balance);
                } else {
                    printf("Invalid amount.\n");
                }
                break;
            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}