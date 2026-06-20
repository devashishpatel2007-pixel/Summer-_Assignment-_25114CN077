#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 3; // Size of the square matrix
    int mat[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };

    bool isSymmetric = true;

    // Logic to check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}