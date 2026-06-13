#include <stdio.h>

int main() {
    int n;
    int even_count = 0;
    int odd_count = 0;

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

    // 3. Check each element and count
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++; // Increases even count if divisible by 2
        } else {
            odd_count++;  // Increases odd count otherwise
        }
    }

    // 4. Display the results
    printf("\n--- Results ---\n");
    printf("Total Even numbers = %d\n", even_count);
    printf("Total Odd numbers  = %d\n", odd_count);

    return 0;
}