#include <stdio.h>

int main() {
    int maths, chem, physics;
    float average;

    printf("Enter marks for Maths: ");
    scanf("%d", &maths);
    
    printf("Enter marks for Chemistry: ");
    scanf("%d", &chem);

    printf("Enter marks for Physics: ");
    scanf("%d", &physics);

//calculate the average marks
    average = (maths + chem + physics) / 3.0;

    // Determine grade based on average marks
    char grade;
    if (average >= 70 && average <= 100) {
        grade = 'A';
    } else if (average >= 60 && average < 70) {
        grade = 'B';
    } else if (average >= 50 && average < 60) {
        grade = 'C';
    } else if (average >= 40 && average < 50) {
        grade = 'D';
    } else {
        grade = 'F'; // Fail
    }

    // Print the grade
    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}