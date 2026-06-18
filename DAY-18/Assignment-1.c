#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    // Outer loop for the number of passes
    for (i = 0; i < n - 1; i++) {
        
        // Inner loop for comparison
        for (j = 0; j < n - i - 1; j++) {
            
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int data[] = {64, 34, 25, 12, 22};
    int n = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}