#include <stdio.h>

int main() {
    int n = 3; // Matrix size (3x3)
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;

    // Calculating the diagonal sum
    for(int i = 0; i < n; i++) {
        sum += a[i][i]; // Adds a[0][0], a[1][1], a[2][2]
    }

    printf("Sum of the main diagonal: %d\n", sum);

    return 0;
}