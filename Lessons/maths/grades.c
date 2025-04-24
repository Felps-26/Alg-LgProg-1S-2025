#include <stdio.h>

// Function to calculate the average of the class


int main() {
    float sum = 0.0;
    int num_students, approv_count = 0, k;
    float max_grade = 0.0, min_grade = 10.0;
    float grades[num_students];

    printf("Enter the number of students in the class: \n");
    scanf("%d", &num_students);

    for (int i = 0; i < num_students; i++) {
        do {
            printf("Enter the grade of student [%d]: (0.0 to 10.0)\n", i + 1);
            scanf("%f", &grades[i]);

            if (grades[i] < 0.0 || grades[i] > 10.0) {
                printf("Invalid grade! Please try again.\n");
            } else {
                sum += grades[i]; 
            }
        } while (grades[i] < 0.0 || grades[i] > 10.0);

        if (grades[i] > max_grade) max_grade = grades[i];
        if (grades[i] < min_grade) min_grade = grades[i];
        if (grades[i] >= 6.0) approv_count++;
    }

    // Calculate the average using the function
    float average = sum / num_students;

    printf("The position k of the student to view their grade (1 to %d): \n", num_students);
    scanf("%d", &k);

    // Student Chooser to position k
    if (k < 1 || k > num_students) {
        printf("Invalid position! Please try again.\n");
        return 1;
    } else {
        printf("The grade of student [%d] is: %.2f\n", k, grades[k - 1]);
    }

    // Show results
    printf("\nClass results:\n");
    printf("Average grade: %.2f\n", average);
    printf("Highest grade: %.2f\n", max_grade);
    printf("Lowest grade: %.2f\n", min_grade);
    printf("Number of students approved: %d\n", approv_count);

    return 0;
}