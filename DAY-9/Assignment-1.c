#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Total number of rows to print

    // Outer loop controls the number of rows (counts down from 5 to 1)
    for (i = rows; i >= 1; i--) {
        
        // Inner loop prints the stars for the current row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next line after printing a row of stars
        printf("\n");
    }

    return 0;
}