#include <stdio.h>

// Function to find the nth Fibonacci number recursively
int fibonacci(int n) {
    // Base cases: the 0th number is 0, and the 1st number is 1
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    // Recursive case: Sum of the two previous Fibonacci numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms = 8; // Number of terms you want to print
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}