#include <stdio.h>

int main() {
    // 1. Define an array with some duplicate numbers
    int numbers[] = {4, 2, 7, 2, 9, 2, 4, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int searchItem;
    int count = 0; // This will store our frequency tally

    // 2. Get user input
    printf("Enter the number you want to count: ");
    scanf("%d", &searchItem);

    // 3. Loop through the array to count occurrences
    for (int i = 0; i < size; i++) {
        if (numbers[i] == searchItem) {
            count++; // Increment the counter every time we see the number
        }
    }

    // 4. Output the results
    if (count > 0) {
        printf("The number %d appears %d times in the array.\n", searchItem, count);
    } else {
        printf("The number %d does not appear in the array.\n", searchItem);
    }

    return 0;
}