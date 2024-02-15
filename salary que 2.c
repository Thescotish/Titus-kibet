#include <stdio.h>

int main() {
    float salary, bonus = 0.0;
    int years_of_service;

    // Prompt the user to enter salary and years of service
    printf("Enter the salary of the employee: ");
    scanf("%f", &salary);

    printf("Enter the number of years of service: ");
    scanf("%d", &years_of_service);

    // Check if years of service is more than 5
    if (years_of_service > 5) {
        // Calculate bonus amount (5% of salary)
        bonus = 0.05 * salary;
    }

    // Print the net bonus amount
    printf("Net bonus amount: %.2f\n", bonus);

    return 0;
}