#include <stdio.h>

int main() {
    int n;

    // 1. Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Input the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3. Assume the first element is both the largest and smallest
    int max = arr[0];
    int min = arr[0];

    // 4. Compare the rest of the elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Found a bigger number, update max
        }
        if (arr[i] < min) {
            min = arr[i]; // Found a smaller number, update min
        }
    }

    // 5. Display the results
    printf("\n--- Results ---\n");
    printf("Largest element  = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}