#include <stdio.h>

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    
    // Call the function and store the result
    int sum = addNumbers(num1, num2);
    
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}