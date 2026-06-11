#include <stdio.h>

// Function to find the maximum of two numbers
int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1 = 15;
    int num2 = 25;
    
    int max = findMax(num1, num2);
    
    printf("The maximum of %d and %d is: %d\n", num1, num2, max);
    
    return 0;
}