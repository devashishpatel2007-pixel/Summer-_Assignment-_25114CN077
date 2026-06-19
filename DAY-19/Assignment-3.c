#include <stdio.h>

int main() {
    int r = 2, c = 3; // Original matrix is 2x3
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2]; // Transposed will be 3x2

    // Calculating transpose
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Printing the result
    printf("Transposed matrix:\n");
    for(int i = 0; i < c; i++) { // Note: iterate up to original columns
        for(int j = 0; j < r; j++) { // Note: iterate up to original rows
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}