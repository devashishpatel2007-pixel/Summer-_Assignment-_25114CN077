#include <stdio.h>
#include <stdlib.h>

// Define the structure for a student
struct Student {
    int id;
    char name[50];
    float marks;
};

void addStudent() {
    FILE *fp = fopen("students.txt", "a"); // Open file in append mode
    struct Student s;

    printf("\nEnter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "%d %s %.2f\n", s.id, s.name, s.marks);
    fclose(fp);
    printf("Student added successfully!\n");
}

void displayStudents() {
    FILE *fp = fopen("students.txt", "r");
    struct Student s;

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%d %s %f", &s.id, s.name, &s.marks) != EOF) {
        printf("ID: %d | Name: %s | Marks: %.2f\n", s.id, s.name, s.marks);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Student\n2. Display Students\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}