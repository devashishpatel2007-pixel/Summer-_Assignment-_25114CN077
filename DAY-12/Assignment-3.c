#include <stdio.h>

// Function to print Fibonacci sequence up to n terms
void printFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Sequence: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", first);
        
        // Calculate the next term
        next = first + second; 
        
        // Shift variables forward
        first = second;        
        second = next;         
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Guard clause for invalid input
    if (terms <= 0) {
        printf("Please enter a number greater than 0.\n");
    } else {
        printFibonacci(terms);
    }

    return 0;
}