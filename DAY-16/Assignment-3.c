#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    // 1. Sort the array
    qsort(arr, n, sizeof(int), compare);

    // 2. Use two pointers
    int left = 0;
    int right = n - 1;
    int found = 0;

    while (left < right) {
        int current_sum = arr[left] + arr[right];

        if (current_sum == target) {
            printf("Pair found: %d + %d = %d\n", arr[left], arr[right], target);
            found = 1;
            break; // Stop after finding the first pair
        } else if (current_sum < target) {
            left++; // Need a larger sum
        } else {
            right--; // Need a smaller sum
        }
    }

    if (!found) {
        printf("No pair found with the given sum.\n");
    }

    return 0;
}