#include <stdio.h>

struct BankAccount {
    int accountNumber;
    char holderName[50];
    float balance;
};

int main() {
    struct BankAccount account;
    int choice;
    float amount;

    // Initialize account
    printf("--- Create Your Bank Account ---\n");
    printf("Enter Account Number: ");
    scanf("%d", &account.accountNumber);
    printf("Enter Account Holder Name: ");
    scanf("%s", account.holderName);
    account.balance = 0.0;
    printf("Account created successfully!\n");

    while (1) {
        printf("\n--- Banking Menu ---\n");
        printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: $%.2f\n", account.balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                account.balance += amount;
                printf("Deposit successful!\n");
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > account.balance) {
                    printf("Insufficient funds!\n");
                } else {
                    account.balance -= amount;
                    printf("Withdrawal successful!\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}