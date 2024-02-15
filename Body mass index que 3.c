#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Prompt the user to enter weight and height
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the calculated BMI
    printf("Body Mass Index (BMI): %.2f\n", bmi);

    return 0;
}