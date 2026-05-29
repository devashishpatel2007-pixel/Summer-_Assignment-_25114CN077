#include <stdio.h>

int main() {
    int num, remainder, product = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // If the user enters 0, the product of digits is 0
    if (num == 0) {
        product = 0;
    } else {
        // Handle negative numbers by converting to positive
        if (num < 0) num = -num;

        while (num != 0) {
            remainder = num % 10;   // Get the last digit
            product = product * remainder; // Multiply it
            num = num / 10;         // Remove the last digit
        }
    }

    printf("The product of the digits is: %d\n", product);

    return 0;
}