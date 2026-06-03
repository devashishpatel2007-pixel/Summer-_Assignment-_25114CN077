#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;

    // Ask the user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Keep the original numbers safe for the final print statement
    a = num1;
    b = num2;

    // The Euclidean Algorithm loop
    while (b != 0) {
        temp = b;     // Save the current value of b
        b = a % b;    // b becomes the remainder of a divided by b
        a = temp;     // a takes the old value of b
    }

    // When b becomes 0, 'a' holds the GCD
    printf("The GCD of %d and %d is: %d\n", num1, num2, a);

    return 0;
}