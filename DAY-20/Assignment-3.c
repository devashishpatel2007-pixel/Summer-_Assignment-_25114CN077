#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Row-wise Sums:\n");

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        int sum = 0; // Reset sum for each new row
        
        // Inner loop for columns
        for (int j = 0; j < cols; j++) {
            sum += mat[i][j];
        }
        
        printf("Sum of row %d: %d\n", i + 1, sum);
    }

    return 0;
}