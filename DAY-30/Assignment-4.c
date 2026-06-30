#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact {
    char name[50];
    char phone[15];
};

// Function prototypes
void addContact(struct Contact c[], int *count);
void displayContacts(struct Contact c[], int count);
void searchContact(struct Contact c[], int count);

int main() {
    struct Contact phonebook[MAX];
    int count = 0, choice;

    while (1) {
        printf("\n--- Phonebook Menu ---\n");
        printf("1. Add Contact\n2. View All\n3. Search\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addContact(phonebook, &count); break;
            case 2: displayContacts(phonebook, count); break;
            case 3: searchContact(phonebook, count); break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}

void addContact(struct Contact c[], int *count) {
    printf("Enter Name: ");
    scanf(" %[^\n]s", c[*count].name);
    printf("Enter Phone: ");
    scanf("%s", c[*count].phone);
    (*count)++;
    printf("Contact added successfully!\n");
}

void displayContacts(struct Contact c[], int count) {
    printf("\n--- Contact List ---\n");
    for (int i = 0; i < count; i++)
        printf("%d. %s - %s\n", i + 1, c[i].name, c[i].phone);
}

void searchContact(struct Contact c[], int count) {
    char name[50];
    printf("Enter name to search: ");
    scanf(" %[^\n]s", name);
    for (int i = 0; i < count; i++) {
        if (strcmp(c[i].name, name) == 0) {
            printf("Found: %s - %s\n", c[i].name, c[i].phone);
            return;
        }
    }
    printf("Contact not found.\n");
}