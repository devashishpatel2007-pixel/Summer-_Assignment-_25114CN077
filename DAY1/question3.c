#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1; // Use long long for large results

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i; // multiply factorial by the current value of i
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}