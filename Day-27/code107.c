//code107
#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee employees[50];
    int count = 0, choice, id, i;
    float totalSalary = 0;
    do {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by Employee ID\n");
        printf("4. Update Salary\n");
        printf("5. Calculate Total Salary Expense\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &employees[count].id);
                printf("Enter Name: ");
                scanf("%s", employees[count].name);
                printf("Enter Salary: ");
                scanf("%f", &employees[count].salary);
                count++;
                printf("Salary record added successfully!\n");
                break;
            case 2:
                printf("\n--- Employee Salary Records ---\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d | Name: %s | Salary: %.2f\n",
                           employees[i].id, employees[i].name, employees[i].salary);
                }
                break;
            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                for (i = 0; i < count; i++) {
                    if (employees[i].id == id) {
                        printf("Found: ID: %d | Name: %s | Salary: %.2f\n",
                               employees[i].id, employees[i].name, employees[i].salary);
                        break;
                    }
                }
                if (i == count) printf("Employee not found.\n");
                break;
            case 4:
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
            case 5:
                totalSalary = 0;
                for (i = 0; i < count; i++) {
                    totalSalary += employees[i].salary;
                }
                printf("Total Salary Expense: %.2f\n", totalSalary);
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
