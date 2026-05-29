#include <stdio.h>

int main() {
    int num, remainder, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;          // 1. Get the last digit
        reversed = reversed * 10 + remainder; // 2. Shift and add
        num = num / 10;                // 3. Remove the last digit
    }

    printf("Reversed Number: %d\n", reversed);

    return 0;
}