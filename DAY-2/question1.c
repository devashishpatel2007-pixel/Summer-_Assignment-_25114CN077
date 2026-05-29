#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // We use a while loop to process each digit
    while (num != 0) {
        remainder = num % 10;   // 1. Get the last digit
        sum = sum + remainder;  // 2. Add it to our total
        num = num / 10;         // 3. Remove the last digit
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}