//code106
#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};
int main() {
    struct Employee employees[50];
    int count = 0, choice, id, i;
    char searchName[50];
    do {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by ID\n");
        printf("4. Search by Name\n");
        printf("5. Update Salary\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &employees[count].id);
                printf("Enter Name: ");
                scanf("%s", employees[count].name);
                printf("Enter Department: ");
                scanf("%s", employees[count].department);
                printf("Enter Salary: ");
                scanf("%f", &employees[count].salary);
                count++;
                printf("Employee record added successfully!\n");
                break;
            case 2:
                printf("\n--- Employee Records ---\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
                           employees[i].id, employees[i].name,
                           employees[i].department, employees[i].salary);
                }
                break;
            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (employees[i].id == id) {
                        printf("Found: ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].department, employees[i].salary);
                        break;
                    }
                }
                if (i == count) printf("Employee not found.\n");
                break;
            case 4:
                printf("Enter Name to search: ");
                scanf("%s", searchName);
                for (i = 0; i < count; i++) {
                    if (strcmp(employees[i].name, searchName) == 0) {
                        printf("Found: ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
                               employees[i].id, employees[i].name,
                               employees[i].department, employees[i].salary);
                        break;
                    }
                }
                if (i == count) printf("Employee not found.\n");
                break;
            case 5:
                printf("Enter Employee ID to update salary: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (employees[i].id == id) {
                        printf("Enter new salary: ");
                        scanf("%f", &employees[i].salary);
                        printf("Salary updated successfully!\n");
                        break;
                    }
                }
                if (i == count) printf("Employee not found.\n");
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);
    return 0;
}
