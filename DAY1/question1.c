#include <stdio.h>

int main() {
    int n, i;
    int sum = 0; // Initialize sum to 0

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Iterate from 1 to n
    for (i = 1; i <= n; ++i) {
        sum += i; // sum = sum + i
    }

    printf("Sum = %d\n", sum);

    return 0;
}
