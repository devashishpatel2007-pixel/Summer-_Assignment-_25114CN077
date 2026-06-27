#include <stdio.h>
#include <stdlib.h>

struct Salary {
    int id;
    char name[50];
    float base;
    float bonus;
    float deductions;
};

void addSalaryRecord() {
    FILE *fp = fopen("salary.txt", "a");
    struct Salary s;

    printf("\nEnter Employee ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Base Salary: ");
    scanf("%f", &s.base);
    printf("Enter Bonus: ");
    scanf("%f", &s.bonus);
    printf("Enter Deductions: ");
    scanf("%f", &s.deductions);

    fprintf(fp, "%d %s %.2f %.2f %.2f\n", s.id, s.name, s.base, s.bonus, s.deductions);
    fclose(fp);
    printf("Record added!\n");
}

void viewSalaryReports() {
    FILE *fp = fopen("salary.txt", "r");
    struct Salary s;
    float net;

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\nID\tName\tNet Salary\n");
    printf("----------------------------\n");
    while (fscanf(fp, "%d %s %f %f %f", &s.id, s.name, &s.base, &s.bonus, &s.deductions) != EOF) {
        net = s.base + s.bonus - s.deductions;
        printf("%d\t%s\t%.2f\n", s.id, s.name, net);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Record\n2. View Payroll\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addSalaryRecord(); break;
            case 2: viewSalaryReports(); break;
            case 3: exit(0);
            default: printf("Invalid!\n");
        }
    }
    return 0;
}