#include <stdio.h>

int main() {
    int num;
    long long factorial = 1; // Used long long because factorials get large quickly

    // 1. Get input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // 2. Calculate factorial using a simple loop
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    // 3. Print the result
    printf("Factorial of %d is: %lld\n", num, factorial);

    return 0;
}