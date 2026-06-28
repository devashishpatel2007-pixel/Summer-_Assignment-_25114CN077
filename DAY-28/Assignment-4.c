#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact directory[50]; // Holds up to 50 contacts
    int count = 0, choice, i;
    char searchName[50];

    while (1) {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n2. View All Contacts\n3. Search Contact\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Name: ");
                scanf("%s", directory[count].name);
                printf("Enter Phone: ");
                scanf("%s", directory[count].phone);
                count++;
                printf("Contact saved!\n");
                break;

            case 2:
                printf("\n--- Contact List ---\n");
                for (i = 0; i < count; i++) {
                    printf("%d. %s - %s\n", i + 1, directory[i].name, directory[i].phone);
                }
                break;

            case 3:
                printf("Enter name to search: ");
                scanf("%s", searchName);
                for (i = 0; i < count; i++) {
                    if (strcmp(directory[i].name, searchName) == 0) {
                        printf("Found: %s - %s\n", directory[i].name, directory[i].phone);
                        break;
                    }
                }
                if (i == count) printf("Contact not found.\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}