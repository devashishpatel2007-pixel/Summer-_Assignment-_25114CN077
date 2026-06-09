#include <stdio.h>

int main() {
    int i, j;
    int size = 5; // The square has 5 rows and 5 columns

    // Outer loop controls rows (1 to 5)
    for (i = 1; i <= size; i++) {
        
        // Inner loop controls columns (1 to 5)
        for (j = 1; j <= size; j++) {
            
            // Print a star ONLY on the outer boundaries
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                printf(" "); // Print an empty space for the hollow inside
            }
        }
        
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}