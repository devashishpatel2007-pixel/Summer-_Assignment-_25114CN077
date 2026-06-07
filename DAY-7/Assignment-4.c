#include <stdio.h>

// Function to reverse a number recursively
int reverseNumber(int n) {
    static int reversed = 0; // Static variable retains its value across recursive calls

    // Base case: when the number becomes 0, return the reversed result
    if (n == 0) {
        return reversed;
    }

    // Take the last digit of n, shift the old reversed number left, and add the digit
    reversed = (reversed * 10) + (n % 10);

    // Recursive case: call the function with the remaining digits
    return reverseNumber(n / 10);
}

int main() {
    int num = 12345; // You can change this to test other numbers
    
    printf("The reverse of %d is %d\n", num, reverseNumber(num));
    
    return 0;
}