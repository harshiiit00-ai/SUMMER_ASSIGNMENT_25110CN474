//code109
#include <stdio.h>
#include <string.h>
struct Book {
    int id;
    char title[100];
    char author[50];
    int available;  
};
int main() {
    struct Book library[50];
    int count = 0, choice, id, i;
    char searchTitle[100];
    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search by ID\n");
        printf("4. Search by Title\n");
        printf("5. Issue Book\n");
        printf("6. Return Book\n");
        printf("7. Exit\n");
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
                library[count].available = 1;
                count++;
                printf("Book added successfully!\n");
                break;
            case 2:
                printf("\n--- Library Books ---\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                    library[i].id, library[i].title, library[i].author,
                    library[i].available ? "Available" : "Issued");
                }
                break;
            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (library[i].id == id) {
                        printf("Found: ID: %d | Title: %s | Author: %s | Status: %s\n",
                        library[i].id, library[i].title, library[i].author,
                        library[i].available ? "Available" : "Issued");
                        break;
                    }
                }
                if (i == count) printf("Book not found.\n");
                break;
            case 4:
                printf("Enter Title to search: ");
                scanf("%s", searchTitle);
                for (i = 0; i < count; i++) {
                    if (strcmp(library[i].title, searchTitle) == 0) {
                        printf("Found: ID: %d | Title: %s | Author: %s | Status: %s\n",
                        library[i].id, library[i].title, library[i].author,
                        library[i].available ? "Available" : "Issued");
                        break;
                    }
                }
                if (i == count) printf("Book not found.\n");
                break;
            case 5:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (library[i].id == id) {
                        if (library[i].available) {
                        library[i].available = 0;
                        printf("Book issued successfully!\n");
                        } else {
                        printf("Book already issued.\n");
                        }
                        break;
                    }
                }
                if (i == count) printf("Book not found.\n");
                break;
            case 6:
                printf("Enter Book ID to return: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (library[i].id == id) {
                        if (!library[i].available) {
                            library[i].available = 1;
                            printf("Book returned successfully!\n");
                        } else {
                            printf("Book was not issued.\n");
                        }
                        break;
                    }
                }
                if (i == count) printf("Book not found.\n");
                break;
            case 7:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);
    return 0;
}