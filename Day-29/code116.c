//code116
#include <stdio.h>
#include <string.h>
struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};
int main() {
    struct Item inventory[50];
    int count = 0, choice, id, i;
    char searchName[50];
    do {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Search by ID\n");
        printf("4. Search by Name\n");
        printf("5. Update Item\n");
        printf("6. Delete Item\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &inventory[count].id);
                printf("Enter Item Name: ");
                scanf("%s", inventory[count].name);
                printf("Enter Quantity: ");
                scanf("%d", &inventory[count].quantity);
                printf("Enter Price: ");
                scanf("%f", &inventory[count].price);
                count++;
                printf("Item added successfully!\n");
                break;
            case 2:
                printf("\n--- Inventory Records ---\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                           inventory[i].id, inventory[i].name,
                           inventory[i].quantity, inventory[i].price);
                }
                break;
            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (inventory[i].id == id) {
                        printf("Found: ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                               inventory[i].id, inventory[i].name,
                               inventory[i].quantity, inventory[i].price);
                        break;
                    }
                }
                if (i == count) printf("Item not found.\n");
                break;
            case 4:
                printf("Enter Item Name to search: ");
                scanf("%s", searchName);
                for (i = 0; i < count; i++) {
                    if (strcmp(inventory[i].name, searchName) == 0) {
                        printf("Found: ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                               inventory[i].id, inventory[i].name,
                               inventory[i].quantity, inventory[i].price);
                        break;
                    }
                }
                if (i == count) printf("Item not found.\n");
                break;
            case 5:
                printf("Enter Item ID to update: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (inventory[i].id == id) {
                        printf("Enter new Quantity: ");
                        scanf("%d", &inventory[i].quantity);
                        printf("Enter new Price: ");
                        scanf("%f", &inventory[i].price);
                        printf("Item updated successfully!\n");
                        break;
                    }
                }
                if (i == count) printf("Item not found.\n");
                break;
            case 6:
                printf("Enter Item ID to delete: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (inventory[i].id == id) {
                        for (int j = i; j < count - 1; j++) {
                            inventory[j] = inventory[j + 1];
                        }
                        count--;
                        printf("Item deleted successfully!\n");
                        break;
                    }
                }
                if (i == count) printf("Item not found.\n");
                break;
            case 7:
                printf("Exiting Inventory Management System...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);
    return 0;
}