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
    float max = 0.0, min = 10.0;
    int max_SG = 0, min_SG = 0;
    float sum = 0.0;

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

        sum += students[i].grade;

        if (students[i].grade > max) {
            max = students[i].grade;
            max_SG = i;
        }
        if (students[i].grade < min) {
            min = students[i].grade;
            min_SG = i;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d: ", i + 1);
        print_student(students[i]);
    }

    float avg = sum / n;
    printf("\nThe average class grade:  %.2f\n\n", avg);

    printf("The worst grade is: %.2f - Student: %s", min, students[min_SG].name);
    printf("The best grade is: %.2f - Student: %s", max, students[max_SG].name);

    return 0;
}