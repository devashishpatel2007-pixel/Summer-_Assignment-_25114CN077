#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int unionArr[n1 + n2];
    int count = 0;

    // 1. Add all elements of the first array
    for (int i = 0; i < n1; i++) {
        unionArr[count++] = arr1[i];
    }

    // 2. Add elements from second array if they don't already exist
    for (int i = 0; i < n2; i++) {
        bool exists = false;
        for (int j = 0; j < count; j++) {
            if (arr2[i] == unionArr[j]) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            unionArr[count++] = arr2[i];
        }
    }

    // Print result
    printf("Union of arrays: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}