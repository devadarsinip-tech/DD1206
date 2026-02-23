#include <stdio.h>

int main() {
    int n, i;
    float grade, credit;
    float total_points = 0, total_credits = 0;
    float gpa;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("\nSubject %d\n", i);
        
        printf("Enter grade point: ");
        scanf("%f", &grade);

        printf("Enter credit: ");
        scanf("%f", &credit);

        total_points += grade * credit;
        total_credits += credit;
    }

    gpa = total_points / total_credits;

    printf("\nGPA = %.2f\n", gpa);

    // CGPA Calculation
    int sem, j;
    float sgpa, sem_credits;
    float cgpa_points = 0, cgpa_credits = 0;
    float cgpa;

    printf("\nEnter number of semesters: ");
    scanf("%d", &sem);

    for(j = 1; j <= sem; j++) {
        printf("\nSemester %d\n", j);

        printf("Enter Semester GPA: ");
        scanf("%f", &sgpa);

        printf("Enter Total Semester Credits: ");
        scanf("%f", &sem_credits);

        cgpa_points += sgpa * sem_credits;
        cgpa_credits += sem_credits;
    }

    cgpa = cgpa_points / cgpa_credits;

    printf("\nCGPA = %.2f\n", cgpa);

    return 0;
}
