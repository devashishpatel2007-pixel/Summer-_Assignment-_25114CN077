#include <stdio.h>

int main() {
    int arr[] = {1, 0, 3, 0, 0, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int count = 0;                        // Keeps track of where to place the next non-zero number

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 1: Walk through the array. If an element is NOT zero,
    // shift it to the front at the 'count' position.
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++; // Move the count pointer to the next slot
        }
    }

    // Step 2: Now that all non-zero numbers are at the front,
    // fill the remaining slots from 'count' to 'n' with zeros.
    while (count < n) {
        arr[count] = 0;
        count++;
    }

    // Print modified array
    printf("Array after moving zeros: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}