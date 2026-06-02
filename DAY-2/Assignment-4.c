#include <stdio.h>

int main() {
    int num, original_num, remainder, reversed_num = 0;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Save the original number because 'num' will change in the loop
    original_num = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed_num = (reversed_num * 10) + remainder;
        num = num / 10;
    }

    // Check if the original number and reversed number are equal
    if (original_num == reversed_num) {
        printf("%d is a palindrome number.\n", original_num);
    } else {
        printf("%d is NOT a palindrome number.\n", original_num);
    }

    return 0;
}