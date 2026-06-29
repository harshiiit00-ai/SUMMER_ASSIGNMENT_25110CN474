//code111
#include <stdio.h>
#include <string.h>
struct Ticket {
    int id;
    char name[50];
    char event[50];
    int booked; 
};
int main() {
    struct Ticket tickets[50];
    int count = 0, choice, id, i;
    char searchName[50];
    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Search by Ticket ID\n");
        printf("4. Search by Name\n");
        printf("5. Cancel Ticket\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Ticket ID: ");
                scanf("%d", &tickets[count].id);
                printf("Enter Name: ");
                scanf("%s", tickets[count].name);
                printf("Enter Event: ");
                scanf("%s", tickets[count].event);
                tickets[count].booked = 1;
                count++;
                printf("Ticket booked successfully!\n");
                break;
            case 2:
                printf("\n--- Ticket Records ---\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Event: %s | Status: %s\n",
                           tickets[i].id, tickets[i].name, tickets[i].event,
                           tickets[i].booked ? "Booked" : "Canceled");
                }
                break;
            case 3:
                printf("Enter Ticket ID to search: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (tickets[i].id == id) {
                        printf("Found: ID: %d | Name: %s | Event: %s | Status: %s\n",
                               tickets[i].id, tickets[i].name, tickets[i].event,
                               tickets[i].booked ? "Booked" : "Canceled");
                        break;
                    }
                }
                if (i == count) printf("Ticket not found.\n");
                break;
            case 4:
                printf("Enter Name to search: ");
                scanf("%s", searchName);
                for (i = 0; i < count; i++) {
                    if (strcmp(tickets[i].name, searchName) == 0) {
                        printf("Found: ID: %d | Name: %s | Event: %s | Status: %s\n",
                               tickets[i].id, tickets[i].name, tickets[i].event,
                               tickets[i].booked ? "Booked" : "Canceled");
                        break;
                    }
                }
                if (i == count) printf("Ticket not found.\n");
                break;
            case 5:
                printf("Enter Ticket ID to cancel: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (tickets[i].id == id) {
                        if (tickets[i].booked) {
                            tickets[i].booked = 0;
                            printf("Ticket canceled successfully!\n");
                        } else {
                            printf("Ticket already canceled.\n");
                        }
                        break;
                    }
                }
                if (i == count) printf("Ticket not found.\n");
                break;

            case 6:
                printf("Exiting Ticket Booking System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);
    return 0;
}
