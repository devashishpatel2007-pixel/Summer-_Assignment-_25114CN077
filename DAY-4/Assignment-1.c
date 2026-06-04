#include <stdio.h>

int main() {
    int n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the first two terms
    printf("Fibonacci Series: %d, %d", t1, t2);

    // Loop starts from 3 because we already printed the first 2 terms
    for (int i = 3; i <= n; ++i) {
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("\n");
    return 0;
}