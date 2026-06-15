#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int k = 2;                            // Number of positions to rotate left

    // Handle cases where k is larger than the array size
    k = k % n; 

    // Create a temporary array to hold the elements that "fall off" the left side
    int temp[k];

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 1: Copy the first 'k' elements into the temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Step 2: Shift the rest of the array elements to the left
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Step 3: Copy the temp elements back into the end of the array
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    // Print rotated array
    printf("Left rotated array by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}