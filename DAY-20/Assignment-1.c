#include <stdio.h>

int main() {
    int r1 = 2, c1 = 3; // Dimensions of matrix 1
    int r2 = 3, c2 = 2; // Dimensions of matrix 2
    
    // Matrix 1 (2x3)
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // Matrix 2 (3x2)
    int mat2[3][2] = {{7, 8}, {9, 1}, {2, 3}};
    
    int result[2][2] = {0}; // Initialize result matrix with 0

    // Matrix Multiplication Logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}