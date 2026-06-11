#include <stdio.h>

// Function to calculate factorial
long long findFactorial(int n) {
    long long factorial = 1;
    
    // Factorial is not defined for negative numbers
    if (n < 0) return -1; 
    
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Same as: factorial = factorial * i;
    }
    
    return factorial;
}

int main() {
    int num = 5;
    long long result = findFactorial(num);
    
    if (result == -1) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("The factorial of %d is: %lld\n", num, result);
    }
    
    return 0;
}