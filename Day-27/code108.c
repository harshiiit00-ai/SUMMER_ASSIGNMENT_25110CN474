//code108
#include <stdio.h>
#include <string.h>
struct Student {
    int rollNo;
    char name[50];
    float marks[5];                 // marks for 5 subjects
    float total;
    float percentage;
    char grade;
};
char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 40) return 'D';
    else return 'F';
}
int main() {
    struct Student s;
    int i;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf("%s", s.name);
    s.total = 0;
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        s.total += s.marks[i];
    }
    s.percentage = s.total / 5.0;
    s.grade = calculateGrade(s.percentage);
    printf("\n===== Marksheet =====\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name   : %s\n", s.name);
    for (i = 0; i < 5; i++) {
    printf("Subject %d Marks: %.2f\n", i + 1, s.marks[i]);
    }
    printf("Total Marks : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade       : %c\n", s.grade);
    return 0;
}
