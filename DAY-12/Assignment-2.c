#include <stdio.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    // Step 1: Count the number of digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num; // Reset temp back to the original number

    // Step 2: Extract digits and calculate the sum of powers
    while (temp > 0) {
        int remainder = temp % 10; // Get the last digit
        
        // Compute remainder raised to the power of 'digits'
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        
        sum += power;       // Add it to the total sum
        temp = temp / 10;   // Remove the last digit
    }

    // Step 3: Compare sum with the original number
    if (sum == originalNum) {
        return 1; // Returns 1 for True
    } else {
        return 0; // Returns 0 for False
    }
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and print the result
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is NOT an Armstrong number.\n", number);
    }

    return 0;
}