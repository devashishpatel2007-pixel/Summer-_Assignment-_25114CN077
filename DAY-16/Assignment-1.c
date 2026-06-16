#include <stdio.h>

int main() {
    // Array with one missing number
    // For example: n = 5, missing number is 3
    int arr[] = {1, 2, 4, 5};
    int n = 5; // The total count of numbers (including the missing one)
    int i, expected_sum, actual_sum = 0;

    // 1. Calculate the expected sum of numbers from 1 to n
    expected_sum = (n * (n + 1)) / 2;

    // 2. Calculate the sum of elements present in the array
    for (i = 0; i < n - 1; i++) {
        actual_sum += arr[i];
    }

    // 3. The missing number is the difference
    printf("The missing number is: %d\n", expected_sum - actual_sum);

    return 0;
}