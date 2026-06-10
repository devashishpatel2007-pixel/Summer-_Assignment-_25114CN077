#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows in the pyramid

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        
        // 1. Inner loop to print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // 2. Inner loop to print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after printing spaces and stars
        printf("\n");
    }

    return 0;
}