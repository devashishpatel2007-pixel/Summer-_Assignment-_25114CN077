#include <stdio.h>

int main() {
    int num, largestPrime = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Loop backwards from num to 2
    for (int i = num; i >= 2; i--) {
        
        // Step 1: Check if 'i' is a factor of 'num'
        if (num % i == 0) {
            
            // Step 2: Check if 'i' is a prime number
            int isPrime = 1; // Assume it is prime
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = 0; // Found a divider, so it's NOT prime
                    break;
                }
            }

            // Step 3: If it's a factor AND prime, we found our winner!
            if (isPrime == 1) {
                largestPrime = i;
                break; // Stop immediately; since we started from the top, this is the largest!
            }
        }
    }

    // Print the result
    if (largestPrime != 0) {
        printf("The largest prime factor is: %d\n", largestPrime);
    } else {
        printf("No prime factors found.\n");
    }

    return 0;
}