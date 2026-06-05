#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Copy original number to compare later
    originalNum = num;

    // Process each digit
    while (num > 0) {
        rem = num % 10; // Get the last digit

        // Calculate factorial of the digit
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;    // Add factorial to sum
        num = num / 10; // Remove the last digit
    }

    // Check if the sum equals the original number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}