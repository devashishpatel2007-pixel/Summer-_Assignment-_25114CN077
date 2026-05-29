#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number in a separate variable
    // because 'num' will become 0 during the loop
    originalNum = num;

    // Logic to reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Check if the reversed number matches the original
    if (originalNum == reversed) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}