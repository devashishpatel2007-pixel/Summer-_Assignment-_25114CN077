#include <stdio.h>
#include <limits.h> // Needed for INT_MIN (the smallest possible integer)

int main() {
    int numbers[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 1. Initialize both to the lowest possible integer value
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // 2. Loop through the array once
    for (int i = 0; i < size; i++) {
        // If current number is bigger than the biggest we've seen so far
        if (numbers[i] > largest) {
            secondLargest = largest; // Old largest drops to second place
            largest = numbers[i];    // Update the new largest
        } 
        // If current number is between largest and second largest
        else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i]; // Update second largest
        }
    }

    // 3. Print the result
    if (secondLargest == INT_MIN) {
        printf("There is no valid second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}