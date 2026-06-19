#include <stdio.h>

int main() {
    int r = 2, c = 2; // Defining dimensions
    int a[2][2] = {{10, 20}, {30, 40}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    // Subtracting matrices
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }

    // Printing the result
    printf("Result of subtraction:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}