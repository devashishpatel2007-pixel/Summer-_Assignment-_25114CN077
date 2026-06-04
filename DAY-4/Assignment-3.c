#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    // Store the original number in a variable because we will modify 'num'
    originalNum = num;

    while (originalNum != 0) {
        // 1. Get the last digit of the number
        remainder = originalNum % 10;
        
        // 2. Cube the digit and add it to the result
        result += remainder * remainder * remainder;
        
        // 3. Remove the last digit from the number
        originalNum /= 10;
    }

    // Check if the calculated sum matches the original input
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}