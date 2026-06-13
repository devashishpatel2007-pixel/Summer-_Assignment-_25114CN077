#include <stdio.h>

int main() {
    int n;

    // 1. Ask the user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declaring the array with the user's size

    // 2. Taking input using a for loop
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3. Displaying the array using another for loop
    printf("\nThe elements in your array are: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Just for a clean new line

    return 0;
}