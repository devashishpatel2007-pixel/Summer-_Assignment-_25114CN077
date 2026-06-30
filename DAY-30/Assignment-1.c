#include <stdio.h>

// Define the structure for a student
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n]; // Array of structures

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &s[i].id);
        
        printf("Name: ");
        scanf("%s", s[i].name); // Note: Only reads up to the first space
        
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student records
    printf("\n--- Student Records ---\n");
    printf("ID\tName\t\tMarks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}