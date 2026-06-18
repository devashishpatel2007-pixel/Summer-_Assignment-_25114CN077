#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        // Calculate the middle index
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;
        
        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }

    // Target was not found in the array
    return -1;
}

int main() {
    int data[] = {11, 12, 22, 25, 64}; // Array must be sorted
    int n = sizeof(data) / sizeof(data[0]);
    int target = 25;

    int result = binarySearch(data, n, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}