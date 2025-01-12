#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student student1;

    // Input student details
    printf("Enter student's name: ");
    scanf("%[^\n]s",&student1.name);
    printf("Enter student's roll number: ");
    scanf("%d", &student1.rollNumber);
    printf("Enter student's marks: ");
    scanf("%f", &student1.marks);

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
