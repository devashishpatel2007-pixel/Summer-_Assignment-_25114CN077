#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee staff[n];

    // Collecting employee data
    for(i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &staff[i].id);
        
        // Using %[^\n] allows reading strings with spaces
        printf("Name: ");
        scanf(" %[^\n]s", staff[i].name);
        
        printf("Salary: ");
        scanf("%f", &staff[i].salary);
    }

    // Displaying employee data
    printf("\n--- Employee Records ---\n");
    printf("%-10s %-20s %-10s\n", "ID", "Name", "Salary");
    printf("-------------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n", staff[i].id, staff[i].name, staff[i].salary);
    }

    return 0;
}