#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Total number of rows

    // Outer loop controls the number of rows (counts down from 5 to 1)
    for (i = rows; i >= 1; i--) {
        
        // Inner loop prints numbers from 1 up to the current value of i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Move to the next line after printing a row of numbers
        printf("\n");
    }

    return 0;
}