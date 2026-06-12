#include <stdio.h>

// Function to check if a number is a perfect number
int isPerfect(int num) {
    int sum = 0;

    // Loop to find proper divisors up to num / 2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add the divisor to sum
        }
    }

    // A perfect number must be positive and equal to the sum of its divisors
    if (sum == num && num > 0) {
        return 1; // Returns 1 for True
    } else {
        return 0; // Returns 0 for False
    }
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and print the result
    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is NOT a perfect number.\n", number);
    }

    return 0;
}