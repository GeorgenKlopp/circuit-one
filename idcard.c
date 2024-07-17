#include <stdio.h>

struct student {
    char name[30];
    int age;
    int classno;
};

int main() {
    struct student s;

    // Input student details
    printf("Enter the student details:\n");
    printf("Name: ");
    scanf("%s", s.name);  // Note: for string input, %s is used
    printf("Age: ");
    scanf("%d", &s.age);
    printf("Class No: ");
    scanf("%d", &s.classno);

    // Output student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Class No: %d\n", s.classno);

    return 0;
}
