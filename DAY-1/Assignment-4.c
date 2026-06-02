#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    // 1. Get the number from the user
    printf("Enter a number: ");
    scanf("%lld", &num);

    // 2. Handle the special case if the user enters 0
    if (num == 0) {
        count = 1;
    } else {
        // 3. Count digits by dividing by 10 until the number hits 0
        while (num != 0) {
            num = num / 10; // This removes the last digit
            count++;        // Increment our digit counter
        }
    }

    // 4. Print the final count
    printf("Number of digits: %d\n", count);

    return 0;
}