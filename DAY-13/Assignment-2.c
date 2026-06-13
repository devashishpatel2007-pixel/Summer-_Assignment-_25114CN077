#include <stdio.h>

int main() {
    int n, sum = 0;
    float average;

    // 1. Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Input elements and calculate sum at the same time
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        sum += arr[i]; // Short for: sum = sum + arr[i]
    }

    // 3. Calculate the average
    // (float) converts sum to a decimal so the division is accurate
    average = (float)sum / n; 

    // 4. Display the results
    printf("\n--- Results ---\n");
    printf("Sum of elements     = %d\n", sum);
    printf("Average of elements = %.2f\n", average); // %.2f prints only 2 decimal places

    return 0;
}