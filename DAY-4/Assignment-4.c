#include <stdio.h>

int main() {
    int low, high, num, originalNum, remainder, result;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: \n", low, high);

    // Loop through every number in the range
    for (num = low; num <= high; ++num) {
        
        originalNum = num;
        result = 0;

        // Check if the current 'num' is an Armstrong number
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        // If the sum of cubes equals the number, print it
        if (result == num) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}