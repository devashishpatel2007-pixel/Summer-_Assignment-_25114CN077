#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice;

    while (1) {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clears the newline character left in the buffer

        switch (choice) {
            case 1:
                printf("Enter string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = 0; // Remove trailing newline
                printf("Length: %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                fgets(str1, 100, stdin);
                strcpy(temp, str1);
                printf("Copied string: %s", temp);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = 0;
                printf("Enter second string: ");
                fgets(str2, 100, stdin);
                strcat(str1, str2);
                printf("Resulting string: %s", str1);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, 100, stdin);
                printf("Enter second string: ");
                fgets(str2, 100, stdin);
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}