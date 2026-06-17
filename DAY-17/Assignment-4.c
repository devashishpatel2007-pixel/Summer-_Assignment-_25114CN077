#include <stdio.h>

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {30, 50, 70, 90, 10};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Common elements are: ");

    // Iterate through the first array
    for (int i = 0; i < n1; i++) {
        // Compare current element of arr1 with all elements of arr2
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                // Break to avoid printing the same element multiple times
                break; 
            }
        }
    }

    return 0;
}