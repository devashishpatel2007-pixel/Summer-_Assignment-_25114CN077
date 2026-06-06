#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, remainder;
    int base = 1; // Represents 2^0, 2^1, 2^2, etc.

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long original_binary = binary; // Store for the final print

    while (binary > 0) {
        remainder = binary % 10;   // Get the last digit (0 or 1)
        decimal = decimal + (remainder * base); // Multiply by current power of 2 and add
        binary = binary / 10;      // Remove the last digit
        base = base * 2;           // Move to the next power of 2
    }

    printf("The decimal equivalent of %lld is: %d\n", original_binary, decimal);

    return 0;
}