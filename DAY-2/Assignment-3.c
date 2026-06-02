#include <stdio.h>

int main() {
    int num, remainder, product = 1; // Start product at 1

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // If the user enters 0, the product of digits is just 0
    if (num == 0) {
        product = 0;
    }

    // Process each digit until num becomes 0
    while (num != 0) {
        remainder = num % 10;       // Get the last digit
        product = product * remainder; // Multiply it to the total
        num = num / 10;             // Remove the last digit
    }

    // Print the final result
    printf("Product of digits = %d\n", product);

    return 0;
}