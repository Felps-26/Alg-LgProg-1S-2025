#include <stdio.h>
#include <string.h>
#define NAME_SZ 64

typedef struct {
    char name[NAME_SZ];
    float grade;
} Student;

void print_student(Student student) {
    printf("\nName: %s\tGrade: %.2f\n", student.name, student.grade);
}

int main() {
    int n;
    float max = 0.0;
    float min = 10.0;

    printf("How many students? ");
    scanf("%d", &n);
    getchar(); 

    Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        fgets(students[i].name, NAME_SZ, stdin);

        printf("Enter the grade of student %d: ", i + 1);
        scanf("%f", &students[i].grade);
        getchar(); 

        if (students[i].grade > max) max = students[i].grade;
        if (students[i].grade < min) min = students[i].grade;
    }

    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        print_student(students[i]);
    }
    printf("\n");
    printf("The worst grade is: %.2f\n", min);
    printf("The best grade is: %.2f\n", max);

    return 0;
}