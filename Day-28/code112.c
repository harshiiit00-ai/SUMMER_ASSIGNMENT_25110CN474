//code112
#include <stdio.h>
#include <string.h>
struct Contact {
    int id;
    char name[50];
    char phone[15];
    char email[50];
};
int main() {
    struct Contact contacts[50];
    int count = 0, choice, id, i;
    char searchName[50];
    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search by ID\n");
        printf("4. Search by Name\n");
        printf("5. Update Contact\n");
        printf("6. Delete Contact\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Contact ID: ");
                scanf("%d", &contacts[count].id);
                printf("Enter Name: ");
                scanf("%s", contacts[count].name);
                printf("Enter Phone: ");
                scanf("%s", contacts[count].phone);
                printf("Enter Email: ");
                scanf("%s", contacts[count].email);
                count++;
                printf("Contact added successfully!\n");
                break;
            case 2:
                printf("\n--- Contact List ---\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Phone: %s | Email: %s\n",
                    contacts[i].id, contacts[i].name,
                    contacts[i].phone, contacts[i].email);
                }
                break;
            case 3:
                printf("Enter Contact ID to search: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (contacts[i].id == id) {
                        printf("Found: ID: %d | Name: %s | Phone: %s | Email: %s\n",
                        contacts[i].id, contacts[i].name,
                        contacts[i].phone, contacts[i].email);
                        break;
                    }
                }
                if (i == count) printf("Contact not found.\n");
                break;
            case 4:
                printf("Enter Name to search: ");
                scanf("%s", searchName);
                for (i = 0; i < count; i++) {
                    if (strcmp(contacts[i].name, searchName) == 0) {
                        printf("Found: ID: %d | Name: %s | Phone: %s | Email: %s\n",
                               contacts[i].id, contacts[i].name,
                               contacts[i].phone, contacts[i].email);
                        break;
                    }
                }
                if (i == count) printf("Contact not found.\n");
                break;
            case 5:
                printf("Enter Contact ID to update: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (contacts[i].id == id) {
                        printf("Enter new Name: ");
                        scanf("%s", contacts[i].name);
                        printf("Enter new Phone: ");
                        scanf("%s", contacts[i].phone);
                        printf("Enter new Email: ");
                        scanf("%s", contacts[i].email);
                        printf("Contact updated successfully!\n");
                        break;
                    }
                }
                if (i == count) printf("Contact not found.\n");
                break;
            case 6:
                printf("Enter Contact ID to delete: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (contacts[i].id == id) {
                        for (int j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                        }
                        count--;
                        printf("Contact deleted successfully!\n");
                        break;
                    }
                }
                if (i == count) printf("Contact not found.\n");
                break;
            case 7:
                printf("Exiting Contact Management System. Goodbye...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);
    return 0;
}
