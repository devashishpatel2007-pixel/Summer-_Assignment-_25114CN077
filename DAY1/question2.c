#include <stdio.h>
int main() {
    int num, i;

    // Ask the user for the number
    printf("Enter an integer to print its table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);
    printf("---------------------------\n");

    // Loop from 1 to 10
    for (i = 1; i <= 10; i++) {
        // Print the result in the format: num * i = result
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
