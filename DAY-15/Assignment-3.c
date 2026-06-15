#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int k = 2;                            // Number of positions to rotate right

    // Handle cases where k is larger than the array size
    k = k % n; 

    // Create a temporary array to hold the elements that "fall off" the right side
    int temp[k];

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 1: Copy the LAST 'k' elements into the temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift the rest of the elements to the right
    // (We loop backwards so we don't overwrite our own data!)
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy the temp elements into the front of the array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print rotated array
    printf("Right rotated array by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}