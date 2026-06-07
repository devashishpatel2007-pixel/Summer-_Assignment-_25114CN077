#include <stdio.h>

// Function to find sum of digits recursively
int sumOfDigits(int n) {
    // Base case: if the number becomes 0, stop and return 0
    if (n == 0) {
        return 0;
    }
    
    // Recursive case: take the last digit + sum of remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num = 1234; // You can change this to test other numbers
    
    printf("The sum of digits of %d is %d\n", num, sumOfDigits(num));
    
    return 0;
}