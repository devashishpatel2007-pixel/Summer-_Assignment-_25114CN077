#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // Handle the special case where the input is 0
    if (n == 0) {
        count = 1;
    } else {
        // Remove the negative sign if the number is negative
        if (n < 0) {
            n = -n;
        }

        // Loop until n becomes 0
        while (n != 0) {
            n = n / 10; // This removes the last digit
            count++;    // Increment the counter
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}