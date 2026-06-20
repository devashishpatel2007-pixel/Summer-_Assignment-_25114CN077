#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Column-wise Sums:\n");

    // Outer loop for columns
    for (int j = 0; j < cols; j++) {
        int sum = 0; // Reset sum for each new column
        
        // Inner loop for rows
        for (int i = 0; i < rows; i++) {
            sum += mat[i][j];
        }
        
        printf("Sum of column %d: %d\n", j + 1, sum);
    }

    return 0;
}