#include <stdio.h>

int main() {
    // 1. Define an array with some duplicate numbers (4 and 2 are repeated)
    int numbers[] = {4, 2, 7, 8, 2, 3, 4, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int foundDuplicate = 0;

    printf("Duplicate elements found: ");

    // 2. Outer loop picks an element one by one
    for (int i = 0; i < size; i++) {
        
        // 3. Inner loop checks the REST of the array for a match
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] == numbers[j]) {
                printf("%d ", numbers[i]);
                foundDuplicate = 1;
                break; // Break inner loop so we don't print the same duplicate twice
            }
        }
    }

    // 4. If no duplicates were found at all
    if (foundDuplicate == 0) {
        printf("None");
    }
    
    printf("\n");
    return 0;
}