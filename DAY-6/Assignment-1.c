#include <stdio.h>

int main() {
    int decimal, remainder;
    long long binary = 0;
    long long place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Store the original number for the final print statement
    int original_decimal = decimal; 

    while (decimal > 0) {
        remainder = decimal % 2;        // Get the remainder (0 or 1)
        binary = binary + (remainder * place); // Place it in the correct position
        decimal = decimal / 2;          // Divide the number by 2
        place = place * 10;             // Move to the next place value (tens, hundreds, etc.)
    }

    printf("The binary equivalent of %d is: %lld\n", original_decimal, binary);

    return 0;
}