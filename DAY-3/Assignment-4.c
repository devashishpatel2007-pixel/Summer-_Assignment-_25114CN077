#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;

    // Ask the user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Keep the original numbers safe for the final calculation
    a = num1;
    b = num2;

    // Step 1: Find the GCD using the Euclidean Algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a; // The GCD is now stored in 'a'

    // Step 2: Use the formula to find the LCM
    // We divide first to prevent the numbers from getting too large (integer overflow)
    lcm = (num1 / gcd) * num2;

    // Output the result
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}