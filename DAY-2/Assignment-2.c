#include <stdio.h>

int main() {
    int num, remainder, reversed_num = 0;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Process each digit until num becomes 0
    while (num != 0) {
        remainder = num % 10;                     // Get the last digit
        reversed_num = (reversed_num * 10) + remainder; // Shift left and add digit
        num = num / 10;                           // Remove the last digit
    }

    // Print the reversed number
    printf("Reversed number = %d\n", reversed_num);

    return 0;
}