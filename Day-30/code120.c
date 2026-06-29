//code120 
#include <stdio.h>
#include <string.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchByRoll(struct Student students[], int count);
void searchByName(struct Student students[], int count);
void updateMarks(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count);
int main() {
    struct Student students[50];
    int count = 0, choice;
    do {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Update Marks\n");
        printf("6. Delete Student\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(students, &count); break;
            case 2: displayStudents(students, count); break;
            case 3: searchByRoll(students, count); break;
            case 4: searchByName(students, count); break;
            case 5: updateMarks(students, count); break;
            case 6: deleteStudent(students, &count); break;
            case 7: printf("Exiting system. Goodbye!\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);
    return 0;
}
void addStudent(struct Student students[], int *count) {
    printf("Enter Roll Number: ");
    scanf("%d", &students[*count].rollNo);
    printf("Enter Name: ");
    scanf("%s", students[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
    printf("Student added successfully!\n");
}
void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d | Name: %s | Marks: %.2f\n",
               students[i].rollNo, students[i].name, students[i].marks);
    }
}
void searchByRoll(struct Student students[], int count) {
    int roll;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Found: Roll No: %d | Name: %s | Marks: %.2f\n",
                   students[i].rollNo, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}
void searchByName(struct Student students[], int count) {
    char name[50];
    printf("Enter Name to search: ");
    scanf("%s", name);
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0) {
        printf("Found: Roll No: %d | Name: %s | Marks: %.2f\n",
        students[i].rollNo, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}
void updateMarks(struct Student students[], int count) {
    int roll;
    printf("Enter Roll Number to update marks: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);
            printf("Marks updated successfully!\n");
            return;
        }
    }
    printf("Student not found.\n");
}
void deleteStudent(struct Student students[], int *count) {
    int roll;
    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);
    for (int i = 0; i < *count; i++) {
        if (students[i].rollNo == roll) {
            for (int j = i; j < *count - 1; j++) {
            students[j] = students[j + 1];
            }
            (*count)--;
            printf("Student deleted successfully!\n");
            return;
        }
    }
    printf("Student not found.\n");
}
