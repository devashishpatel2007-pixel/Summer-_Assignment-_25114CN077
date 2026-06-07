#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5; // You can change this number to test others
    
    printf("The factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}