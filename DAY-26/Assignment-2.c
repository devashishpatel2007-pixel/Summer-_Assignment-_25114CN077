#include <stdio.h>

int main() {
    int age;

    printf("--- Voting Eligibility Checker ---\n");
    printf("Please enter your age: ");
    
    // Read the user's input
    if (scanf("%d", &age) != 1) {
        printf("Invalid input. Please enter a numeric age.\n");
        return 1;
    }

    // Logic to check eligibility
    if (age >= 18) {
        printf("You are eligible to vote!\n");
    } else if (age < 0) {
        printf("Please enter a valid age (cannot be negative).\n");
    } else {
        int years_left = 18 - age;
        printf("Sorry, you are not eligible to vote yet.\n");
        printf("You will be eligible in %d year(s).\n", years_left);
    }

    return 0;
}