#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX], n = 0, choice, i, pos, val;

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insertion
                if (n >= MAX) {
                    printf("Array is full!\n");
                } else {
                    printf("Enter position (0 to %d): ", n);
                    scanf("%d", &pos);
                    printf("Enter value: ");
                    scanf("%d", &val);
                    for (i = n; i > pos; i--) arr[i] = arr[i - 1];
                    arr[pos] = val;
                    n++;
                }
                break;

            case 2: // Deletion
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter position to delete (0 to %d): ", n - 1);
                    scanf("%d", &pos);
                    for (i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
                    n--;
                }
                break;

            case 3: // Display
                printf("Array elements: ");
                for (i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;

            case 4: // Exit
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}