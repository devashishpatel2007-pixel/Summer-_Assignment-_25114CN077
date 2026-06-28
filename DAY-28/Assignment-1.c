#include <stdio.h>
#include <string.h>

// Define the structure for a book
struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book library[100]; // Array to hold up to 100 books
    int count = 0, choice, searchId, i;

    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n2. Display All Books\n3. Search Book by ID\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &library[count].id);
                printf("Enter Title: ");
                scanf("%s", library[count].title);
                printf("Enter Author: ");
                scanf("%s", library[count].author);
                count++;
                printf("Book added successfully!\n");
                break;

            case 2:
                printf("\nID\tTitle\t\tAuthor\n");
                for (i = 0; i < count; i++) {
                    printf("%d\t%s\t\t%s\n", library[i].id, library[i].title, library[i].author);
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);
                for (i = 0; i < count; i++) {
                    if (library[i].id == searchId) {
                        printf("Found: %s by %s\n", library[i].title, library[i].author);
                        break;
                    }
                }
                if (i == count) printf("Book not found.\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}