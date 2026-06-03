#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime = true;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        isPrime = false;
    } else {
        // Check if num is divisible by any number from 2 up to num/2
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false; // Found a factor, so it's not prime
                break;       // Exit the loop early
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}