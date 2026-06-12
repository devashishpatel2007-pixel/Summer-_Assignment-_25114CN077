#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    // Loop to reverse the number
    while (num > 0) {
        remainder = num % 10;         // Get the last digit
        reversedNum = (reversedNum * 10) + remainder; // Build the reversed number
        num = num / 10;               // Remove the last digit from num
    }

    // If the original number matches the reversed number, it's a palindrome
    if (originalNum == reversedNum) {
        return 1; // Returns 1 for True
    } else {
        return 0; // Returns 0 for False
    }
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and check the result
    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is NOT a palindrome number.\n", number);
    }

    return 0;
}