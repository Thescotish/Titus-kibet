#include <stdio.h>

int main() {
    int p, t;
    float r, simple_interest;

    // Prompt the user to enter principal amount (p) and time period (t)
    printf("Enter principal amount: ");
    scanf("%d", &p);

    printf("Enter time period (in years): ");
    scanf("%d", &t);

    // Prompt the user to enter annual interest rate as a decimal value
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &r);

    // Convert rate of interest from percentage to decimal
    r = r / 100;

    // Calculate simple interest
    simple_interest = (p * r * t);

    // Print the result
    printf("Simple interest = %.2f\n", simple_interest);

    return 0;
}