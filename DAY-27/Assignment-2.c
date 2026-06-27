#include <stdio.h>
#include <stdlib.h>

// Define the structure for an employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

void addEmployee() {
    FILE *fp = fopen("employees.txt", "a");
    struct Employee e;

    printf("\nEnter Employee ID: ");
    scanf("%d", &e.id);
    printf("Enter Name: ");
    scanf("%s", e.name);
    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
    fclose(fp);
    printf("Employee record added successfully!\n");
}

void displayEmployees() {
    FILE *fp = fopen("employees.txt", "r");
    struct Employee e;

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Employee Records ---\n");
    printf("ID\tName\tSalary\n");
    while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
        printf("%d\t%s\t%.2f\n", e.id, e.name, e.salary);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n--- Employee System ---\n");
        printf("1. Add Employee\n2. Display All\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}