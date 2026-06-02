#include <stdio.h>

int main() {
    long long N; // Using long long to handle larger numbers
    long long sum;

    // Ask the user for input
    printf("Enter a positive integer (N): ");
    if (scanf("%lld", &N) != 1 || N <= 0) {
        printf("Please enter a valid positive integer greater than 0.\n");
        return 1; // Exit the program with an error code
    }

    // Formula to calculate the sum of first N natural numbers
    sum = (N * (N + 1)) / 2;

    // Display the result
    printf("The sum of the first %lld natural numbers is: %lld\n", N, sum);

    return 0;
}