    #include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Process each digit until num becomes 0
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        sum = sum + remainder; // Add it to the sum
        num = num / 10;        // Remove the last digit
    }

    // Print the final result
    printf("Sum of digits = %d\n", sum);

    return 0;
}