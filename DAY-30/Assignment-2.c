#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    int n, i;

    printf("Enter the number of books to add: ");
    scanf("%d", &n);

    struct Book library[n];

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &library[i].id);
        
        printf("Title: ");
        scanf("%s", library[i].title);
        
        printf("Author: ");
        scanf("%s", library[i].author);
    }

    // Display library catalog
    printf("\n--- Library Catalog ---\n");
    printf("ID\tTitle\t\tAuthor\n");
    printf("-----------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\n", library[i].id, library[i].title, library[i].author);
    }

    return 0;
}