#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 1. Sort the array so duplicates are adjacent
    qsort(arr, n, sizeof(int), compare);

    printf("Array after removing duplicates: ");

    // 2. Iterate and print only if the current element != next element
    for (int i = 0; i < n; i++) {
        // If it's the last element, or if it's different from the next
        if (i == n - 1 || arr[i] != arr[i + 1]) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}