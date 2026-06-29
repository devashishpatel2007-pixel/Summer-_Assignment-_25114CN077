#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product inventory[100];
    int count = 0, choice, i, searchID;

    while (1) {
        printf("\n--- Inventory Management ---\n");
        printf("1. Add Product\n2. Display Inventory\n3. Update Stock\n4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("ID: "); scanf("%d", &inventory[count].id);
                printf("Name: "); scanf("%s", inventory[count].name);
                printf("Quantity: "); scanf("%d", &inventory[count].quantity);
                printf("Price: "); scanf("%f", &inventory[count].price);
                count++;
                break;

            case 2:
                printf("\nID\tName\tQty\tPrice\n");
                for (i = 0; i < count; i++)
                    printf("%d\t%s\t%d\t%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                break;

            case 3:
                printf("Enter Product ID to update: ");
                scanf("%d", &searchID);
                for (i = 0; i < count; i++) {
                    if (inventory[i].id == searchID) {
                        printf("Enter new quantity: ");
                        scanf("%d", &inventory[i].quantity);
                        break;
                    }
                }
                break;

            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}