#include <stdio.h>

int main() {
    int rows = 5; // The image shows 5 rows

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop to print numbers from 1 up to the current row number
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Move to the next line after finishing the row
        printf("\n");
    }

    return 0;
}