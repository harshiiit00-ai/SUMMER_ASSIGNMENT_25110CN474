//code117
#include <stdio.h>
#include <string.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
int main() {
    struct Student students[50];
    int count = 0, choice, roll, i;
    char searchName[50];
    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Update Marks\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &students[count].rollNo);
                printf("Enter Name: ");
                scanf("%s", students[count].name);
                printf("Enter Marks: ");
                scanf("%f", &students[count].marks);
                count++;
                printf("Record added successfully!\n");
                break;

            case 2:
                printf("\n--- Student Records ---\n");
                for (i = 0; i < count; i++) {
                printf("Roll No: %d | Name: %s | Marks: %.2f\n",
                students[i].rollNo, students[i].name, students[i].marks);
                }
                break;
            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);
                for (i = 0; i < count; i++) {
                if (students[i].rollNo == roll) {
                printf("Found: Roll No: %d | Name: %s | Marks: %.2f\n",
                students[i].rollNo, students[i].name, students[i].marks);
                break;
                    }
                }
                if (i == count) printf(" Record not found.\n");
                break;
            case 4:
                printf("Enter Name to search: ");
                scanf("%s", searchName);
                for (i = 0; i < count; i++) {
                if (strcmp(students[i].name, searchName) == 0) {
                printf("Found: Roll No: %d | Name: %s | Marks: %.2f\n",
                students[i].rollNo, students[i].name, students[i].marks);
                        break;
                    }
                }
                if (i == count) printf("Record not found.\n");
                break;
            case 5:
                printf("Enter Roll Number to update marks: ");
                scanf("%d", &roll);
                for (i = 0; i < count; i++) {
                    if (students[i].rollNo == roll) {
                        printf("Enter new marks: ");
                        scanf("%f", &students[i].marks);
                        printf("Marks updated successfully!\n");
                        break;
                    }
                }
                if (i == count) printf("Record not found.\n");
                break;
            case 6:
                printf("Exciting Student Record System. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);
    return 0;
}
