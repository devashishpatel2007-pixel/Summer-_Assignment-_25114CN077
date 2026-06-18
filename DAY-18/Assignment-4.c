#include <stdio.h>

void bubbleSortDescending(int arr[], int n) {
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            
            // Change the operator from '>' to '<' to sort in descending order
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int data[] = {12, 64, 25, 34, 22};
    int n = sizeof(data) / sizeof(data[0]);

    bubbleSortDescending(data, n);

    printf("Sorted array in descending order: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}