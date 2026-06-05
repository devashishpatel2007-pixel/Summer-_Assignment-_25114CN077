#include <stdio.h>

int main() {
    int num, sum = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find divisors and calculate their sum
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add the divisor to sum
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum == num && num > 0) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is NOT a Perfect Number.\n", num);
    }

    return 0;
}