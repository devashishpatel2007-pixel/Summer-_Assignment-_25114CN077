#include <stdio.h>

int main() {
    // 1. Define an array and the number to search for
    int numbers[] = {12, 45, 78, 23, 56, 89};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculates total elements
    int searchItem, found = 0;

    // 2. Get user input
    printf("Enter the number you want to search: ");
    scanf("%d", &searchItem);

    // 3. Linear Search Logic
    for (int i = 0; i < size; i++) {
        if (numbers[i] == searchItem) {
            printf("Success! %d found at index %d (Position %d).\n", searchItem, i, i + 1);
            found = 1; 
            break; // Stop the loop early since we found it
        }
    }

    // 4. If the loop finishes and 'found' is still 0
    if (found == 0) {
        printf("Sorry, %d is not in the array.\n", searchItem);
    }

    return 0;
}