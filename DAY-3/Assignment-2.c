#include <stdio.h>
#include <stdbool.h>

int main() {
    int start, end;

    // Ask user for the range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Outer loop to go through each number in the range
    for (int num = start; num <= end; num++) {
        
        // Skip numbers less than or equal to 1, as they are not prime
        if (num <= 1) {
            continue;
        }

        bool isPrime = true;

        // Inner loop to check if 'num' is prime
        // We only need to check factors up to the square root of num (i * i <= num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false; // Found a factor, not prime
                break;           // No need to check further
            }
        }

        // If the number is prime, print it
        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n"); // Move to a new line at the end
    return 0;
}