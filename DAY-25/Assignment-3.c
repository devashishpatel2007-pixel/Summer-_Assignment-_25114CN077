#include <stdio.h>
#include <string.h>

int main() {
    // 2D array to store 5 names, each up to 20 characters long
    char names[5][20] = {"Charlie", "Alice", "Bob", "Eve", "David"};
    char temp[20];
    int n = 5;

    // Bubble Sort Algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare names using strcmp
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap the strings
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}