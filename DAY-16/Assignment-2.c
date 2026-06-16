#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 3, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Find the max element to define the size of frequency array
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) max_val = arr[i];
    }

    // Create frequency array initialized to 0
    int freq[max_val + 1];
    for (int i = 0; i <= max_val; i++) freq[i] = 0;

    // Count occurrences
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find the element with the highest frequency
    int max_freq = 0;
    int most_frequent_element = arr[0];

    for (int i = 0; i <= max_val; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent_element = i;
        }
    }

    printf("The most frequent element is %d (appears %d times).\n", 
            most_frequent_element, max_freq);

    return 0;
}