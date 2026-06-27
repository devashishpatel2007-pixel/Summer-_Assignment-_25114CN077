#include <stdio.h>
#include <stdlib.h>

struct Marksheet {
    int rollNo;
    char name[50];
    float sub1, sub2, sub3;
};

void generateMarkSheet() {
    struct Marksheet m;
    float total, percentage;
    char grade;

    printf("\nEnter Roll Number: ");
    scanf("%d", &m.rollNo);
    printf("Enter Name: ");
    scanf("%s", m.name);
    printf("Enter Marks for 3 Subjects: ");
    scanf("%f %f %f", &m.sub1, &m.sub2, &m.sub3);

    total = m.sub1 + m.sub2 + m.sub3;
    percentage = total / 3.0;

    if (percentage >= 90) grade = 'A';
    else if (percentage >= 75) grade = 'B';
    else if (percentage >= 50) grade = 'C';
    else grade = 'F';

    printf("\n--- Student Marksheet ---");
    printf("\nRoll: %d | Name: %s", m.rollNo, m.name);
    printf("\nTotal Marks: %.2f | Percentage: %.2f%%", total, percentage);
    printf("\nGrade: %c\n", grade);
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Generate Marksheet\n2. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) generateMarkSheet();
        else if (choice == 2) exit(0);
        else printf("Invalid choice!\n");
    }
    return 0;
}